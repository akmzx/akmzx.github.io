$(function () {
  const now = new Date();
  const today = now.getDate();
  var now_month = now.getMonth();
  var now_year = now.getFullYear();

  var Sundays = [];
  var Mondays = [];
  var Tuesdays = [];
  var Wednesdays = [];
  var Thursdays = [];
  var Fridays = [];
  var Saturdays = [];

  getAllDaysInMonth(now_year, now_month);

  $("button.today").on("click", function () {
    const now = new Date();
    const today = now.getDate();
    var now_month = now.getMonth();
    var now_year = now.getFullYear();

    Sundays = [];
    Mondays = [];
    Tuesdays = [];
    Wednesdays = [];
    Thursdays = [];
    Fridays = [];
    Saturdays = [];
    getAllDaysInMonth(now_year, now_month);
  });

  $("button.back").on("click", function () {
    Sundays = [];
    Mondays = [];
    Tuesdays = [];
    Wednesdays = [];
    Thursdays = [];
    Fridays = [];
    Saturdays = [];

    now_month--;
    if (now_month < 1) {
      now_month = 11;
      now_year--;
    }
    getAllDaysInMonth(now_year, now_month);
  });

  $("button.next").on("click", function () {
    Sundays = [];
    Mondays = [];
    Tuesdays = [];
    Wednesdays = [];
    Thursdays = [];
    Fridays = [];
    Saturdays = [];

    now_month++;
    if (now_month > 11) {
      now_month = 0;
      now_year++;
    }

    getAllDaysInMonth(now_year, now_month);
  });

  function getAllDaysInMonth(year, month) {
    $("span.yrs").html(year);
    name_month(month);
    const date = new Date(year, month, 1);
    day = date.getDay();
    for (let i = 0; i < day; i++) {
      switch (i) {
        case 0:
          Sundays.push("");
          break;
        case 1:
          Mondays.push("");
          break;
        case 2:
          Tuesdays.push("");
          break;
        case 3:
          Wednesdays.push("");
          break;
        case 4:
          Thursdays.push("");
          break;
        case 5:
          Fridays.push("");
          break;
        case 6:
          Saturdays.push("");
          break;
        default:
          break;
      }
    }
    while (date.getMonth() === month) {
      day = date.getDay();

      switch (day) {
        case 0:
          Sundays.push(date.getDate());
          break;
        case 1:
          Mondays.push(date.getDate());
          break;
        case 2:
          Tuesdays.push(date.getDate());
          break;
        case 3:
          Wednesdays.push(date.getDate());
          break;
        case 4:
          Thursdays.push(date.getDate());
          break;
        case 5:
          Fridays.push(date.getDate());
          break;
        case 6:
          Saturdays.push(date.getDate());
          break;
        default:
          break;
      }
      date.setDate(date.getDate() + 1);
    }
    Sundays = change_arr(Sundays);
    Mondays = change_arr(Mondays);
    Tuesdays = change_arr(Tuesdays);
    Wednesdays = change_arr(Wednesdays);
    Thursdays = change_arr(Thursdays);
    Fridays = change_arr(Fridays);
    Saturdays = change_arr(Saturdays);

    $("div.sun").html(Sundays);
    $("div.mon").html(Mondays);
    $("div.tue").html(Tuesdays);
    $("div.wed").html(Wednesdays);
    $("div.thu").html(Thursdays);
    $("div.fri").html(Fridays);
    $("div.sat").html(Saturdays);
  }

  function change_arr(arr) {
    return arr.map((item) => {
      if (item != today) {
        return `<p>${item}</p>`;
      } else {
        return `<p><span class="today">${item}</span></p>`;
      }
    });
  }

  function name_month(v) {
    let monthName = "";
    switch (v) {
      case 0:
        monthName = "January";
        break;
      case 1:
        monthName = "February";
        break;
      case 2:
        monthName = "March";
        break;
      case 3:
        monthName = "April";
        break;
      case 4:
        monthName = "May";
        break;
      case 5:
        monthName = "June";
        break;
      case 6:
        monthName = "July";
        break;
      case 7:
        monthName = "August";
        break;
      case 8:
        monthName = "September";
        break;
      case 9:
        monthName = "October";
        break;
      case 10:
        monthName = "November";
        break;
      case 11:
        monthName = "December";
        break;
      default:
        break;
    }
    $("h2.month").html(monthName);
  }
});
