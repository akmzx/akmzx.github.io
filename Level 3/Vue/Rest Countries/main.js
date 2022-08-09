const app = Vue.createApp({
  data() {
    return {
      lightMode: true,
      clicked: false,
      search: "",
      selected: "All",
      options: ["All", "Africa", "Americas", "Asia", "Europe", "Oceania"],
      // countries: {
      //   name: Array(),
      //   native: Array(),
      //   population: Array(),
      //   region: Array(),
      //   subregion: Array(),
      //   capital: Array(),
      //   tld: Array(),
      //   img: Array(),
      // },
      countries: Array(),
      data: Array(),
      number: Number(),
      currencyName: Array(),
      languageName: Array(),
    };
  },
  mounted() {
    axios
      .get("https://restcountries.com/v3.1/all")
      .then((response) => {
        // handle success
        console.log(response.data);
        this.data = response.data;
        this.countries = response.data;
        // let data = response.data;
        // for (let i = 0; i < data.length; i++) {
        //   this.countries.name.push(data[i].name.official);
        //   this.countries.native.push(data[i].name.common);
        //   this.countries.population.push(data[i].population);
        //   this.countries.region.push(data[i].region);
        //   this.countries.subregion.push(data[i].subregion);
        //   this.countries.capital.push(data[i].capital);
        //   this.countries.tld.push(data[i].tld);
        //   this.countries.img.push(data[i].flags.png);
        // }
      })
      .catch((err) => {
        console.log(err);
      });
  },
  watch: {
    selected() {
      if (this.selected === "All") {
        this.countries = this.data;
      } else {
        this.countries = this.data.filter((country) => {
          return country.region.includes(this.selected);
        });
      }
    },
    search() {
      let result = this.search.toLowerCase();
      this.selected = "All";
      if (this.search != "") {
        this.countries = this.data.filter((country) => {
          return (
            country.name.official.toLowerCase().includes(result) ||
            country.name.common.toLowerCase().includes(result)
          );
        });
      } else {
        this.countries = this.data;
      }
    },
  },

  methods: {
    changeTheme() {
      this.lightMode = !this.lightMode;
      if (this.lightMode == true) {
        document.body.classList.remove("dark_mode");
      } else {
        document.body.classList.add("dark_mode");
      }
    },
    btnClick() {
      this.clicked = !this.clicked;
    },
    showData(num) {
      this.number = num;
      this.btnClick();
      let currencyObject = this.data[num].currencies;
      if (currencyObject != undefined) {
        let currencyValues = Object.values(currencyObject);
        for (let i = 0; i < currencyValues.length; i++) {
          this.currencyName.push(currencyValues[i].name);
        }
      } else {
        this.currencyName = "";
      }

      let languageObject = this.data[num].languages;
      if (languageObject != undefined) {
        let languageValues = Object.values(languageObject);
        for (let i = 0; i < languageValues.length; i++) {
          this.languageName.push(languageValues[i]);
        }
      }
    },
    numberFormat(x) {
      return String(x).replace(/(.)(?=(\d{3})+$)/g, "$1,");
    },
  },
});
