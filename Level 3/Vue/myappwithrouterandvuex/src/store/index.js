import { createStore } from "vuex";

export default createStore({
  state: {
    name: "Aung Kaung Myat",
    cart: localStorage.getItem("cart") | "",
    age: 19,
    students: [
      { name: "ma", age: 19 },
      { name: "mg", age: 15 },
      { name: "sa", age: 19 },
    ],
  },
  getters: {
    adults(state) {
      return state.students.filter((row) => row.age >= 18);
    },
  },
  mutations: {
    incrementm(state, payload) {
      state.age += payload;
    },
  },
  actions: {
    incrementa(context, data) {
      context.commit("incrementm", data);
    },
  },
  modules: {},
});
