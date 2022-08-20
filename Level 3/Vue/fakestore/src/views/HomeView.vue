<template>
  <div class="home">
    <CarouselSlide />
    <h1 class="fs-1 fw-bold font-monospace p-4 text-center">
      PRODUCT CATEGORIES
    </h1>
    <ProductCategory />
  </div>
</template>

<script>
import CarouselSlide from "../components/CarouselSlide.vue";
import ProductCategory from "@/components/ProductCategory.vue";

export default {
  name: "HomeView",
  components: { CarouselSlide, ProductCategory },
};
</script>

<style></style>
