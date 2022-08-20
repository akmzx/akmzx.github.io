<template>
  <footer class="customnav-color bg-dark graycolor">
    <div class="container py-5">
      <div class="row gy-5">
        <div class="col-xl-4 col-lg-4 col-md-12 col-sm-12 col-12">
          <img src="../assets/images/logo.jpg" alt="" class="img-fluid logo" />
          <div class="my-3">
            <span class="h4 text-white"> + (012) 800 450 789 </span>
          </div>

          <p>
            Lorem ipsum dolor sit amet consectetur adipisicing elit. Quidem quam
            autem quibusdam. Perferendis, illum voluptates.
          </p>
        </div>
        <div class="col-xl-2 col-lg-2 col-md-4 col-sm-6 col-6">
          <p class="text-uppercase h5 text-white mb-4">Information</p>
          <p class="mb-0">Specials</p>
          <p class="mb-0">New Products</p>
          <p class="mb-0">Top Sellers</p>
          <p class="mb-0">Services</p>
          <p class="mb-0">Our Store</p>
          <p class="mb-0">Validation</p>
        </div>
        <div class="col-xl-2 col-lg-2 col-md-4 col-sm-6 col-6">
          <p class="text-uppercase h5 text-white mb-4">My Account</p>
          <p class="mb-0">My Orders</p>
          <p class="mb-0">My Credit Slips</p>
          <p class="mb-0">My Address</p>
          <p class="mb-0">My Personal Info</p>
          <p class="mb-0">Return Policy</p>
          <p class="mb-0">Our Stores</p>
        </div>
        <div class="col-xl-4 col-lg-4 col-md-4 col-sm-12 col-12">
          <p class="text-uppercase h5 text-white mb-4">Get To Touch</p>
          <p class="mb-0">Address: 123 Main Street, Anytown, CA 12345 - USA.</p>
          <p class="mb-0">Telephone Enquiry: (012) 800 456 789-987</p>
          <p class="mb-0">Email: Contact@plazathemes.com</p>

          <p class="text-uppercase h5 text-white my-4">0pening Time</p>
          <p class="mb-0">
            Open: <span class="text-white">8:00 AM</span> - Close:
            <span class="text-white">18:00 PM</span>
          </p>
          <p class="mb-0">Saturday - Sunday: Close</p>
        </div>
      </div>
    </div>
    <hr class="bg-light col-12" />
    <div class="container py-3">
      <div class="row">
        <div class="col-xl-6 col-lg-6 col-md-6 col-sm-12 col-12">
          <p class="graycolor">
            Copyright © 2013-1028 Magento, Inc. All rights reserved.
          </p>
        </div>
        <div class="col-xl-6 col-lg-6 col-md-6 col-sm-12 col-12 text-end">
          <img src="../assets/images/visa.png" alt="" class="img-fluid" />
        </div>
      </div>
    </div>
  </footer>
</template>

<script>
export default {
  name: "FooterBar",
};
</script>

<style scoped>
.graycolor {
  color: #999;
}

.mainColor {
  color: #eb3e32;
}

.logo {
  border-radius: 50%;
  width: 150px;
}
</style>
