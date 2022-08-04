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
