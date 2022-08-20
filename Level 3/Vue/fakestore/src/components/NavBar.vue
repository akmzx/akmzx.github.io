<template>
  <nav class="navbar navbar-expand-lg bg-light">
    <div class="container-fluid">
      <a class="navbar-brand fs-3" href="#">
        <img
          src="../assets/images/logo.jpg"
          class="px-3"
          alt=""
          height="40"
        />AKM Shop
      </a>

      <button
        class="navbar-toggler"
        type="button"
        data-bs-toggle="collapse"
        data-bs-target="#navbarSupportedContent"
        aria-controls="navbarSupportedContent"
        aria-expanded="false"
        aria-label="Toggle navigation"
      >
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <ul class="navbar-nav ms-auto mb-2 mb-lg-0">
          <li class="nav-item px-2 fs-5">
            <router-link to="/" class="nav-link" aria-current="page"
              >Home</router-link
            >
          </li>
          <li class="nav-item px-2 fs-5">
            <router-link to="/shop" class="nav-link" aria-current="page"
              >Shop</router-link
            >
          </li>
          <li class="nav-item px-2 fs-5">
            <router-link to="/cart" class="nav-link" aria-current="page"
              >Cart
              <span class="badge text-bg-secondary">{{
                this.$store.state.cart
              }}</span></router-link
            >
          </li>
        </ul>
      </div>
    </div>
  </nav>
</template>

<script>
export default {
  name: "NavBar",
  data() {
    return {};
  },
  mounted() {
    this.$store.dispatch("commitData");
  },
};
</script>

<style scoped>
.navbar-brand img {
  border-radius: 50%;
}

.nav-item {
  position: relative;
  text-decoration: none;
  color: #262626;
}

.nav-item::before {
  position: absolute;
  content: "";
  width: 100%;
  height: 3px;
  bottom: -3px;
  background-color: #262626;
  visibility: hidden;
  transform: scaleX(0);
  transition: all 0.3s ease-in-out 0s;
}

.nav-item:hover::before {
  visibility: visible;
  transform: scaleX(1);
}
</style>
