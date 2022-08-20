import { createApp } from "vue";
import App from "./App.vue";
import router from "./router";
import store from "./store";
import "bootstrap/dist/css/bootstrap.min.css";
import "bootstrap/dist/js/bootstrap.bundle.min.js";

const axios = require("axios").default;
axios.defaults.baseURL = "https://fakestoreapi.com";
createApp(App).use(store).use(router, axios).mount("#app");
