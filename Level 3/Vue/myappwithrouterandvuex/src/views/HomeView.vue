<template>
  <div class="home"></div>
  <h2>All Products</h2>

  <div class="dropdown">
    <button
      class="btn btn-secondary dropdown-toggle"
      type="button"
      data-bs-toggle="dropdown"
      aria-expanded="false"
    >
      Categories
    </button>
    <ul class="dropdown-menu">
      <li>
        <button
          class="dropdown-item"
          type="button"
          v-for="(item, index) in categories"
          :key="index"
          @click="getProductsByCategory(item)"
        >
          {{ item }}
        </button>
      </li>
    </ul>
  </div>
  <div class="row">
    <div class="col-md-3" v-for="(item, index) in products" :key="index">
      <div class="card">
        <img :src="item.image" class="card-img-top" alt="" />
        <div class="card-body">
          <h5 class="card-title">{{ item.title }}</h5>
          <!-- <router-link :to="`detail/${item.id}`" class="btn btn-primary"
            >View</router-link
          > -->
          <router-link
            :to="{ name: 'detail', params: { id: item.id } }"
            class="btn btn-primary"
            >View</router-link
          >
        </div>
      </div>
    </div>
  </div>
</template>

<script>
// @ is an alias to /src

const axios = require("axios");

export default {
  name: "HomeView",
  data() {
    return {
      products: [],
      categories: [],
    };
  },
  mounted() {
    this.getProducts();
    this.getCategories();
  },
  methods: {
    getProducts() {
      axios.get("/products").then((response) => {
        // console.log(response);
        this.products = response.data;
      });
    },
    getCategories() {
      axios.get("/products/categories").then((response) => {
        this.categories = response.data;
      });
    },
    getProductsByCategory(name) {
      axios.get("/products/category/" + name).then((response) => {
        this.products = response.data;
      });
    },
  },
};
</script>
