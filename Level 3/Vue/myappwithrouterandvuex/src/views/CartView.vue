<template>
  <div class="cart">
    <section v-if="cart.length > 0">
      <table class="table">
        <thead>
          <tr>
            <th scope="col">#</th>
            <th scope="col">First</th>
            <th scope="col">Last</th>
            <th scope="col">Handle</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <th scope="row">1</th>
            <td>Mark</td>
            <td>Otto</td>
            <td>@mdo</td>
          </tr>
          <tr>
            <th scope="row">2</th>
            <td>Jacob</td>
            <td>Thornton</td>
            <td>@fat</td>
          </tr>
          <tr>
            <th scope="row">3</th>
            <td colspan="2">Larry the Bird</td>
            <td>@twitter</td>
          </tr>
        </tbody>
      </table>
    </section>
    <section v-else>
      <h2 class="text-center">Empty Cart</h2>
    </section>
  </div>
</template>

<script>
export default {
  name: "CartView",
  data() {
    return {
      cart: [],
    };
  },
  mounted() {
    let cartArr;
    let cart = localStorage.getItem("cart");
    if (cart) {
      cartArr = JSON.parse(cart);
    }

    this.cart = cartArr;
  },
};
</script>
