$(function () {
  getData();

  $("button.atcbtn").on("click", function () {
    var id = $(this).data("id");
    var name = $(this).data("name");
    var price = $(this).data("price");

    var item = {
      id: id,
      name: name,
      price: price,
      qty: 1,
    };
    console.log(item);

    var cartStr = localStorage.getItem("cart");
    if (!cartStr) {
      var itemArr = new Array();
      itemArr.push(item);
    } else {
      itemArr = JSON.parse(cartStr);
      for (let i = 0; i < itemArr.length; i++) {
        if (itemArr[i].name === name) {
          itemArr[i].qty += 1;
          var done = true;
          break;
        }
      }
      if (!done) itemArr.push(item);
    }

    localStorage.setItem("cart", JSON.stringify(itemArr));
  });

  function getData() {
    var cartStr = localStorage.getItem("cart");
    var cartArr = JSON.parse(cartStr);

    var data = "";
    if (!cartStr) {
      data = `<p class="empty">Your Cart is Empty!</p>`;
      $("#cart").html(data);
    } else {
      var items = cartArr.map(function (item) {
        return `<tr>
          <td>${item.name}</td>
          <td>${item.price}</td>
          <td>${item.qty}</td>
          <td>${item.price * item.qty}</td>
        </tr>`;
      });
      data += items;
      $(".items").html(data);
      var prices = cartArr.map(function (item) {
        return item.price * item.qty;
      });
      data = prices.reduce((sum, current) => {
        return (sum += current);
      }, 0);
    }
    $(".total_price").html(data);
  }
});
