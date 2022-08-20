<template>
  <div class="detail">
    <div class="container-fluid py-5">
      <router-link to="/shop" class="btn btn-light px-3 fs-5">
        <i class="bi bi-arrow-left"></i> Back</router-link
      >
      <div class="row">
        <div class="col-xl-6 col-lg-6 col-md-12 col-sm-12 col-12">
          <div class="text-center">
            <img :src="product.image" class="img-fluid" alt="" />
          </div>
        </div>
        <div class="col-xl-6 col-lg-6 col-md-12 col-sm-12 col-12">
          <p class="fs-1">{{ this.product.title }}</p>
          <p class="fs-5">{{ this.product.description }}</p>
          <p class="fs-5">
            Rating: {{ this.rate }}
            <i class="bi bi-star-fill" v-for="star in stars" :key="star"></i>
            <i class="bi bi-star" v-for="star in emptyStars" :key="star"></i>
            ({{ this.count }})
          </p>
          <p class="fs-5">Price: ${{ this.product.price }}</p>
          <a href="#" class="btn btn-primary" @click="addtoCart()"
            >Add to Cart</a
          >
        </div>
      </div>
    </div>
  </div>
</template>

<script>
import axios from "axios";

export default {
  name: "productView",
  data() {
    return {
      product: Object,
      stars: [],
      emptyStars: [],
      rate: Number,
      count: Number,
    };
  },
  mounted() {
    let id = this.$route.params.id;
    axios.get("/products/" + id).then((response) => {
      this.product = response.data;
      console.log(response.data);
      this.stars = Math.round(response.data.rating.rate);
      this.rate = response.data.rating.rate;
      this.count = response.data.rating.count;
      this.emptyStars = 5 - Math.round(response.data.rating.rate);
    });
  },
  methods: {
    addtoCart() {
      let id = this.product.id;
      let item = {
        id: this.product.id,
        name: this.product.title,
        price: this.product.price,
        qty: 1,
        total: this.product.price,
      };

      let cartStr = localStorage.getItem("cart");
      if (!cartStr) {
        var itemArr = new Array();
      } else {
        itemArr = JSON.parse(cartStr);
      }
      var status = false;
      itemArr.forEach(function (value) {
        if (value.id == id) {
          value.qty++;
          value.total = value.price * value.qty;
          status = true;
          return false;
        }
      });

      if (status == false) {
        itemArr.push(item);
      }
      localStorage.setItem("cart", JSON.stringify(itemArr));
      this.$store.dispatch("commitData");
    },
  },
};
</script>

<style scoped>
.img-fluid {
  width: 60%;
}

.bi-star-fill {
  color: yellow;
}

.btn-light {
  width: max-content;
  padding: 10px;
}
</style>
