import { createStore } from "vuex";

export default createStore({
  state: {
    cart: 0,
  },
  getters: {},
  mutations: {
    inputData(state) {
      let cartStr = localStorage.getItem("cart");
      if (cartStr) {
        let itemArr = JSON.parse(cartStr);
        let total = 0;

        itemArr.forEach(function (value) {
          total += value.qty;
        });
        state.cart = total;
      } else {
        state.cart = 0;
      }
    },
  },
  actions: {
    commitData(context) {
      context.commit("inputData");
    },
  },
  modules: {},
});
