<template>
  <div class="about">
    <h1>This is an about page</h1>
    {{ count }}
    <button @click="count++">Increase</button>
  </div>
</template>

<script>
export default {
  name: "AboutView",
  data() {
    return {
      count: 1,
    };
  },
};
</script>
