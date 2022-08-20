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
            <input type="number" name="qty" id="qty" min="1" v-model="qty" />
            <button
              type="button"
              class="btn btn-primary"
              @click="addtocart(product)"
            >
              Add to Cart
            </button>
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
      qty: 1,
    };
  },
  mounted() {
    let id = this.$route.params.id;
    axios.get("/products/" + id).then((response) => {
      this.product = response.data;
    });
  },
  methods: {
    addtocart(product) {
      let cartArr = [];
      let status = false;
      let cart = localStorage.getItem("cart");
      if (!cart) {
        cartArr = new Array();
      } else {
        cartArr = JSON.parse(cart);
      }
      product.qty = this.qty;

      for (let item of cartArr) {
        if (item.id == product.id) {
          item.qty += product.qty;
          status = true;
        }
      }
      if (!status) cartArr.push(product);
      localStorage.setItem("cart", JSON.stringify(cartArr));
    },
  },
};
</script>
