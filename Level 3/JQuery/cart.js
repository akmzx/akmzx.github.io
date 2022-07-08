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
    } else {
      itemArr = JSON.parse(cartStr);
    }

    itemArr.push(item);
    localStorage.setItem("cart", JSON.stringify(itemArr));
  });
  // if click addtocart btn, store into local storage
  //   [
  //     {
  //       id: 1,
  //       name: "item one",
  //       price: 1500,
  //       qty: 1,
  //     },
  //   ];
  function getData() {
    var cartStr = localStorage.getItem("cart");
    var data = "";
    if (!cartStr) {
      data += `Your Cart is Empty!`;
    } else {
      data += `Show your items here`;
    }

    $("#cart").html(data);
  }
});
