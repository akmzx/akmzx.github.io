var sign_clicked;
var array_one = [];
var array_two = [];
var first_num = 0;
var second_num = 0;
var first_dot = false;
var second_dot = false;
var calc_sign = undefined;

$(function () {
  function append_firstNum(num) {
    if (sign_clicked != true) {
      array_one.push(num);
      first_num = array_one.join("");
      $(".first_num").text(first_num);
    } else {
      array_two.push(num);
      second_num = array_two.join("");
      $(".second_num").text(second_num);
    }
  }
  $(".number").on("click", function () {
    num = $(this).data("value");
    append_firstNum(parseFloat(num));
  });

  $(".dot").on("click", function () {
    if (sign_clicked != true && !first_dot) {
      array_one.push(".");
      first_num = array_one.join("");
      $(".first_num").text(first_num);
      first_dot = true;
    } else if (sign_clicked == true && !second_dot) {
      array_two.push(".");
      second_num = array_two.join("");
      $(".second_num").text(second_num);
      second_dot = true;
    }
  });

  $(".calc_sign").on("click", function () {
    if (array_one.length > 0) {
      sign_clicked = true;
      calc_sign = $(this).text();
      $(".sign").text(calc_sign);
    }
  });

  $(".equal_sign").on("click", function () {
    let result;
    switch (calc_sign) {
      case "+":
        result = parseFloat(first_num) + parseFloat(second_num);
        console.log(first_num, second_num);
        break;
      case "-":
        result = parseFloat(first_num) - parseFloat(second_num);
        console.log(first_num, second_num);
        break;
      case "x":
        result = parseFloat(first_num) * parseFloat(second_num);
        console.log(first_num, second_num);
        break;
      case "÷":
        result = parseFloat(first_num) / parseFloat(second_num);
        console.log(first_num, second_num);
        break;
      default:
        result = "";
        break;
    }
    $(".first_num").text(result);
    $(".second_num").text("");
    $(".sign").text("");
    array_one = [result];
    array_two = [];
    calc_sign = undefined;
    sign_clicked = undefined;
    let check = String(result).split("");
    for (let i = 0; i < check.length; i++) {
      if (check[i] == ".") {
        first_dot = true;
        break;
      } else {
        first_dot = false;
      }
    }
    second_dot = false;
    first_num = parseFloat(result);
    second_num = 0;
  });

  $(".ac_btn").on("click", function () {
    array_one = [];
    array_two = [];
    calc_sign = undefined;
    sign_clicked = undefined;
    first_dot = false;
    second_dot = false;
    first_num = 0;
    second_num = 0;

    $(".first_num").text("");
    $(".second_num").text("");
  });
});
