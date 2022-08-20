<template>
  <div class="about">
    <h1>This is a contact page</h1>
    {{ this.$store.state.age }}
    <button @click="increase">Increase</button>
    {{ adults }}
  </div>
</template>

<script>
export default {
  data() {
    return {
      adults: this.$store.getters.adults,
    };
  },
  methods: {
    increase() {
      this.$store.dispatch("incrementa", 2);
    },
  },
};
</script>
