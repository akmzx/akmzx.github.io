$(function () {
  getData();

  $("button.addtoCart_btn").on("click", function () {
    let id = $(this).data("id");
    let name = $(this).data("name");
    let price = $(this).data("price");

    let item = {
      id: id,
      name: name,
      price: price,
      qty: 1,
    };
    // console.log(item);

    let cartStr = localStorage.getItem("cart");
    if (!cartStr) {
      var itemArr = new Array();
    } else {
      itemArr = JSON.parse(cartStr);
    }
    var status = false;
    $.each(itemArr, function (i, v) {
      if (v.id == id) {
        v.qty++;
        status = true;
        return false;
      }
    });

    if (status == false) {
      itemArr.push(item);
    }
    localStorage.setItem("cart", JSON.stringify(itemArr));
    getData();
  });

  function getData() {
    let cartStr = localStorage.getItem("cart");
    var total = 0;
    var data = "";

    if (!cartStr) {
      data = `<h2 class="empty">Your Cart is Empty!</h2>`;
      $(".table").hide();
      $(".cart_empty").show();
      $(".cart_empty").html(data);
    } else {
      var body;
      var cartArr = JSON.parse(cartStr);
      var total = 0;
      $.each(cartArr, function (i, item) {
        let id = i + 1;
        total += item.qty * item.price;
        body += `<tr>
        <td class="button_td">
          <p>${id}</p>
          <button class="deletebtn">X</button>
        </td>
        <td>${item.name}</td>
        <td>${numberFormat(item.price)}</td>
        <td class="button_td">
          <button class="minbtn" data-index="${i}">-</button>
          <p>${item.qty}</p>
          <button class="maxbtn" data-index="${i}">+</button>
        </td>
        <td>${numberFormat(item.price * item.qty)}</td>
      </tr>`;
      });
      body += `<tr>
      <td colspan="4">Total</td>
      <td>${numberFormat(total)}</td>
    </tr>`;
      $(".cart_empty").hide();
      $(".product_data").html(body);
      $(".table").show();
    }
  }

  // Decrease Qty
  $(".product_data").on("click", ".minbtn", function () {
    var index = $(this).data("index");
    let cartStr = localStorage.getItem("cart");
    var cartArr = JSON.parse(cartStr);
    if (cartArr[index].qty > 1) {
      cartArr[index].qty--;
    } else {
      var status = confirm("Are you sure to Delete?");
      if (status == true) {
        // delete that row
        cartArr.splice(index, 1);
      }
    }
    // console.log(cartArr[index]);
    localStorage.setItem("cart", JSON.stringify(cartArr));
    if (cartArr.length < 1) {
      localStorage.clear();
    }
    getData();
  });

  // increase Qty
  $(".product_data").on("click", ".maxbtn", function () {
    var index = $(this).data("index");
    let cartStr = localStorage.getItem("cart");
    var cartArr = JSON.parse(cartStr);
    cartArr[index].qty++;
    localStorage.setItem("cart", JSON.stringify(cartArr));
    getData();
  });

  // clear product
  $(".product_data").on("click", ".deletebtn", function () {
    var index = $(this).data("index");
    let cartStr = localStorage.getItem("cart");
    var cartArr = JSON.parse(cartStr);
    var status = confirm("Are you sure to Delete?");
    if (status == true) {
      // delete that row
      cartArr.splice(index, 1);
    }
    localStorage.setItem("cart", JSON.stringify(cartArr));
    if (cartArr.length < 1) {
      localStorage.clear();
    }
    getData();
  });

  function numberFormat(x) {
    return String(x).replace(/(.)(?=(\d{3})+$)/g, "$1,");
  }
});
