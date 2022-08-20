<template>
  <div class="shop">
    <ProductList />
  </div>
</template>

<script>
import axios from "axios";
import ProductList from "@/components/ProductList.vue";

export default {
  name: "ShopView",
  components: { ProductList },
  data() {
    return {
      items: [],
    };
  },
  mounted() {
    axios.get("/products").then((response) => {
      console.log(response.data);
    });
  },
};
</script>

<style></style>
