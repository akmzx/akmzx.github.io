<template>
  <div class="container-fluid py-3">
    <h1 class="fs-1 fw-bold font-monospace p-4 text-center">
      {{ categoryName.toUpperCase() }}
    </h1>
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
      categoryName: "",
      products: [],
    };
  },
  mounted() {
    this.categoryName = this.$route.params.name;
    this.getProductsByCategory();
  },
  methods: {
    // getCategories() {
    //   axios.get("/products/categories").then((response) => {
    //     this.categories = response.data;
    //   });
    // },
    getProductsByCategory() {
      axios.get("/products/category/" + this.categoryName).then((response) => {
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
