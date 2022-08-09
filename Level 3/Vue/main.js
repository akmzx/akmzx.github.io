const app = Vue.createApp({
  data() {
    return {
      message: "<h3 style='color: red;'>Hello Vue!</h3>",
      name: "Aung Kaung Myat",
      age: 19,
      photo: "logo.png",
      seen: true,
      colors: ["red", "gree", "blue"],
      students: [
        { name: "Mg Mg", age: 22, gender: "male" },
        { name: "Su Su", age: 23, gender: "female" },
        { name: "Bo Bo", age: 20, gender: "male" },
      ],
      count: 1,
      username: "",
    };
  },
  methods: {
    openalert(msg) {
      alert(msg);
    },
  },
});

const app2 = Vue.createApp({
  data() {
    return {
      age: Number,
      isButtonDisabled: true,
      isInputDisabled: true,
      mark: 50,
      isActive: true,
      hasError: false,
      students: [
        { name: "Mg Mg", age: 22, gender: "male" },
        { name: "Su Su", age: 23, gender: "female" },
        { name: "Bo Bo", age: 20, gender: "male" },
      ],
    };
  },
  methods: {
    mybtn() {
      if (this.age >= 18) {
        this.isInputDisabled = false;
      }
    },
    validate() {
      console.log("Form validation here!");
    },
    alertDetails(index) {
      alert(
        `My name is ${this.students[index].name} and I'm ${this.students[index].age} years old`
      );
    },
  },
});

const app3 = Vue.createApp({
  data() {
    return {
      status: true,
      name: "Aung Myat",
      items: Array(),
    };
  },
  mounted() {
    // this.name = this.name.split("").reverse().join("");
    // console.log(`the component is now mounted`)

    axios
      .get("https://api.imgflip.com/get_memes")
      .then((response) => {
        // handle success
        console.log(response.data);
        if (response.data.success == true) {
          this.items = response.data.data.memes;
        }
      })
      .catch((err) => {
        console.log(err);
      });
  },
  methods: {
    getData() {},
  },
});

const app4 = Vue.createApp({
  data() {
    return {
      students: [
        { name: "Mg Mg", age: 16, gender: "male" },
        { name: "Su Su", age: 23, gender: "female" },
        { name: "Bo Bo", age: 20, gender: "male" },
      ],
    };
  },
  methods: {},
  computed: {
    boys() {
      return this.students.filter((row) => row.gender == "male");
    },
    adults() {
      return this.students.filter((row) => row.age >= 18);
    },
    kyats(value) {
      return `${value} Ks`;
    },
  },
});
