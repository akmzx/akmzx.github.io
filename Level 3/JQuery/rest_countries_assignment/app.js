$(function () {
  $("div.success").hide();
  var country = [];
  $.get("https://restcountries.com/v3.1/all", function (resp) {
    $("div.load").hide();
    $("div.success").show();
    country = resp;
    showData(resp);
  });

  $("body").on("click", "div.country_card", function () {
    let name = $(this).data("name");
    let native_name = $(this).data("native");
    let population = numberFormat($(this).data("population"));
    let region = $(this).data("region");
    let subregion = $(this).data("subregion");
    let capital = $(this).data("capital");
    let domain = $(this).data("tld");
    let currency = $(this).data("currency");
    let language = $(this).data("language");
    let img = $(this).data("img");

    $("div.country_cards").hide();
    $("div.sort_div").hide();
    let country_card = "";
    country_card = `<div class="back_div">
    <button class="backbtn">
      <i class="fa-solid fa-arrow-left-long"></i
      ><span class="colored">Back</span>
    </button>
  </div>
  <div class="country_click">
    <div class="country-click-img">
      <img
        src="${img}"
        alt="${name}"
        class="img_click"
      />
    </div>
    <div class="information_click">
      <h2 class="name_click">${name}</h2>
      <div class="left_side">
        <p class="native_click">
          Native Name: <span class="colored">${native_name}</span>
        </p>
        <p class="population_click">
          Population: <span class="colored">${population}</span>
        </p>
        <p class="region_click">
          Region: <span class="colored">${region}</span>
        </p>
        <p class="subregion_click">
          Sub Region: <span class="colored">${subregion}</span>
        </p>
        <p class="capital_click">
          Capital: <span class="colored">${capital}</span>
        </p>
      </div>
      <div class="right_side">
        <p class="domain_click">
          Top Level Domain: <span class="colored">${domain}</span>
        </p>
        <p class="currency_click">
          Currencies: <span class="colored">${currency}</span>
        </p>
        <p class="languages_click">
          Languages: <span class="colored">${language}</span>
        </p>
      </div>
    </div>
  </div>`;
    $("div.clicked").show();
    $("div.clicked").html(country_card);
  });

  $("body").on("click", "button.backbtn", function () {
    $("div.clicked").hide();
    $("div.country_cards").show();
    $("div.sort_div").show();
  });

  $("input#searchBar").on("keyup", function () {
    let result = $(this).val().toLowerCase();
    let filteredCountry = country.filter((country) => {
      return (
        country.name.official.toLowerCase().includes(result) ||
        country.name.common.toLowerCase().includes(result)
      );
    });
    showData(filteredCountry);
  });

  $("select.filter_box").on("change", function () {
    let result = $(this).val();
    let filteredCountry = [];
    console.log(result);
    switch (result) {
      case "Africa":
        filteredCountry = country.filter((country) => {
          return country.region.includes(result);
        });
        showData(filteredCountry);
        break;
      case "Americas":
        filteredCountry = country.filter((country) => {
          return country.region.includes(result);
        });
        showData(filteredCountry);
        break;
      case "Asia":
        filteredCountry = country.filter((country) => {
          return country.region.includes(result);
        });
        showData(filteredCountry);
        break;
      case "Europe":
        filteredCountry = country.filter((country) => {
          return country.region.includes(result);
        });
        showData(filteredCountry);
        break;
      case "Oceania":
        filteredCountry = country.filter((country) => {
          return country.region.includes(result);
        });
        showData(filteredCountry);
        break;
      default:
        showData(country);
        break;
    }
  });

  function numberFormat(x) {
    return String(x).replace(/(.)(?=(\d{3})+$)/g, "$1,");
  }

  function showData(resp) {
    // country Card
    var data = "";
    for (let i = 0; i < resp.length; i++) {
      // currency
      let currencyObject = resp[i].currencies;
      if (currencyObject != undefined) {
        let currencyValues = Object.values(currencyObject);
        var currencyName = [];
        for (let i = 0; i < currencyValues.length; i++) {
          currencyName.push(currencyValues[i].name);
        }
      }

      // languages
      let languageObject = resp[i].languages;
      if (languageObject != undefined) {
        let languageValues = Object.values(languageObject);
        var languageName = [];
        for (let i = 0; i < languageValues.length; i++) {
          languageName.push(languageValues[i]);
        }
      }

      let population = numberFormat(resp[i].population);

      data += `<div
      class="country_card"
      data-name="${resp[i].name.official}"
      data-native="${resp[i].name.common}"
      data-population="${resp[i].population}"
      data-region="${resp[i].region}"
      data-subregion="${resp[i].subregion}"
      data-capital="${resp[i].capital}"
      data-tld="${resp[i].tld}"
      data-currency="${currencyName}"
      data-language="${languageName}"
      data-img="${resp[i].flags.png}"
    >
      <img
        src="${resp[i].flags.png}"
        alt="${resp[i].name.official}"
        class="flag"
      />
      <div class="country_info">
        <h4 class="name">${resp[i].name.official}</h4>
        <p class="population">Population: ${population}</p>
        <p class="region">Region: ${resp[i].region}</p>
        <p class="capital">Capital: ${resp[i].capital}</p>
      </div>
    </div>`;
    }

    $("div.clicked").hide();
    $(".country_cards").html(data);
  }
});
