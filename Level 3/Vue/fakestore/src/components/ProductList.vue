<template>
  <div class="container-fluid py-3">
    <h1 class="fs-1 fw-bold font-monospace p-4 text-center">Products</h1>
    <div class="dropdown text-end">
      <button
        class="btn btn-primary dropdown-toggle"
        type="button"
        data-bs-toggle="dropdown"
        aria-expanded="false"
      >
        Categories
      </button>
      <ul class="dropdown-menu">
        <li>
          <button class="dropdown-item" type="button" @click="getProducts()">
            All
          </button>
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
    <div class="row g-4">
      <div
        class="col-xl-3 col-lg-3 col-md-6 col-sm-6 col-12"
        v-for="product in products"
        :key="product.id"
      >
        <div class="card">
          <img :src="product.image" class="card-img-top" alt="" />
          <div class="card-body">
            <h5 class="card-title">{{ product.title }}</h5>
            <p class="card-text border-top border-bottom">
              <span class="fs-5">Price: $ {{ product.price }}</span>
            </p>
            <!-- <p class="d-block border-top border-bottom py-2"></p> -->
            <router-link
              :to="{ name: 'detail', params: { id: product.id } }"
              class="btn btn-primary"
              >View</router-link
            >
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
import axios from "axios";
export default {
  name: "ProductList",
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

<style scoped>
.card {
  width: 1fr;
  height: 100%;
}

.card-img-top {
  height: 350px;
  padding: 30px;
}

.card-title {
  padding-bottom: 20px;
}

.btn {
  margin-bottom: 30px;
}
</style>
