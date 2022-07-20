var Sundays = [];
var Mondays = [];
var Tuesdays = [];
var Wednesdays = [];
var Thursdays = [];
var Fridays = [];
var Saturdays = [];
var sunday = "";
var monday = "";
var tuesday = "";
var wednesday = "";
var thursday = "";
var friday = "";
var saturday = "";

const now = new Date();
const today = now.getDate();

getAllDaysInMonth(now.getFullYear(), now.getMonth());

sunday = pushArray(Sundays);
monday = pushArray(Mondays);
tuesday = pushArray(Tuesdays);
wednesday = pushArray(Wednesdays);
thursday = pushArray(Thursdays);
friday = pushArray(Fridays);
saturday = pushArray(Saturdays);

$("div.sun").html(sunday);
$("div.mon").html(monday);
$("div.tue").html(tuesday);
$("div.wed").html(wednesday);
$("div.thu").html(thursday);
$("div.fri").html(friday);
$("div.sat").html(saturday);

function getAllDaysInMonth(year, month) {
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
}

function pushArray(day_array) {
  let v = "";
  for (let i = 0; i < day_array.length; i++) {
    if (day_array[i] === today) {
      console.log(day_array[i]);
      v += `<p><span class="today">${day_array[i]}</span></p>`;
    } else {
      v += `<p>${day_array[i]}</p>`;
    }
  }
  return v;
}
