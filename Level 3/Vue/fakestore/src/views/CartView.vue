<template>
  <div class="cart">
    <div class="container py-5">
      <h1 class="text-center">
        {{ empty ? "Your Cart" : "Your Cart is Empty" }}
      </h1>
      <table class="table" v-if="empty">
        <thead>
          <tr>
            <th scope="col">No</th>
            <th scope="col">Product Name</th>
            <th scope="col">Price</th>
            <th scope="col">Quantity</th>
            <th scope="col">Total</th>
          </tr>
        </thead>
        <tbody>
          <tr v-for="(product, index) in Products" :key="product.id">
            <th scope="row">{{ ++index }}</th>
            <td>{{ product.name }}</td>
            <td>$ {{ product.price }}</td>
            <td>
              <button
                type="button"
                class="btn btn-light"
                @click="addtoCart(product)"
              >
                +
              </button>
              <span class="qty"> {{ product.qty }}</span>
              <button
                type="button"
                class="btn btn-light"
                @click="removefromCart(product)"
              >
                -
              </button>
            </td>
            <td>$ {{ product.total }}</td>
          </tr>
        </tbody>
        <tfoot>
          <tr>
            <td scope="row"></td>
            <td scope="row">Total Price</td>
            <td scope="row"></td>
            <td scope="row"></td>
            <td scope="row">$ {{ numberFormat(totalPrice) }}</td>
          </tr>
        </tfoot>
      </table>
    </div>
  </div>
</template>

<script>
export default {
  name: "CartView",
  data() {
    return {
      empty: false,
      totalPrice: Number,
      Products: Array,
    };
  },
  mounted() {
    this.show();
  },

  methods: {
    addtoCart(item) {
      let id = item.id;

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
          value.total =
            Math.round(value.price * value.qty * 100 + Number.EPSILON) / 100;
          status = true;
          return false;
        }
      });

      if (status == false) {
        itemArr.push(item);
      }
      localStorage.setItem("cart", JSON.stringify(itemArr));
      this.show();
    },

    removefromCart(item) {
      let id = item.id;

      let cartStr = localStorage.getItem("cart");
      if (!cartStr) {
        var itemArr = new Array();
      } else {
        itemArr = JSON.parse(cartStr);
      }
      itemArr.forEach(function (value, index) {
        if (value.id == id && value.qty > 1) {
          value.qty--;
          value.total =
            Math.round(value.price * value.qty * 100 + Number.EPSILON) / 100;
          return false;
        } else if (value.id == id && value.qty == 1) {
          var status = confirm("Are you sure to Delete?");
          if (status == true) {
            itemArr.splice(index, 1);
          }
        }
      });
      localStorage.setItem("cart", JSON.stringify(itemArr));
      if (itemArr.length < 1) {
        localStorage.clear();
      }
      this.show();
    },

    show() {
      let cartStr = localStorage.getItem("cart");
      let Total = 0;

      if (!cartStr) {
        this.empty = false;
      } else {
        this.empty = true;
        this.Products = JSON.parse(cartStr);
        this.Products.forEach(function (value) {
          Total += value.qty * value.price;
        });
      }
      this.totalPrice = Math.round(Total * 100 + Number.EPSILON) / 100;
      this.$store.dispatch("commitData");
    },

    numberFormat(x) {
      return String(x).replace(/(.)(?=(\d{3})+$)/g, "$1,");
    },
  },
};
</script>

<style scoped>
@media (max-width: 450px) {
  button {
    padding: 0;
    width: 100%;
  }

  .qty {
    display: block;
    text-align: center;
  }
}
</style>
