<template>
  <div class="about">
    <h1>This is a detail page {{ $route.params.id }}</h1>
    <div class="card mb-3">
      <div class="row g-0">
        <div class="col-md-4">
          <img :src="product.image" class="img-fluid rounded-start" alt="..." />
        </div>
        <div class="col-md-8">
          <div class="card-body">
            <h5 class="card-title">{{ product.title }}</h5>
            <p class="card-text">
              This is a wider card with supporting text below as a natural
              lead-in to additional content. This content is a little bit
              longer.
            </p>
            <button type="button" class="btn btn-primary">Add to Cart</button>
            <!-- <p class="card-text">
              <small class="text-muted">Last updated 3 mins ago</small>
            </p> -->
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
import axios from "axios";

export default {
  name: "DetailView",
  data() {
    return {
      product: Object,
    };
  },
  mounted() {
    let id = this.$route.params.id;
    axios.get("/products/" + id).then((response) => {
      this.product = response.data;
    });
  },
};
</script>
