const app = Vue.createApp({
  data() {
    return {
      title: "BMI Calculator",
      feet: 0,
      inch: 0,
      pound: 0,
      paragraph:
        "<p style='color: blue'>Underweight = <18.5</p><p style='color: green'>Normalweight = 18.5 - 24.9</p><p style='color: orange'>Overweight = 25 - 29.9</p><p style='color: red'>Obesity = BMI of 30 or greater</p>",
      result: "",
    };
  },
  methods: {
    calculate(feet, inch, pound) {
      let num = (pound / (feet * 12 + inch) ** 2) * 703;
      if (num < 18.5) {
        return "<h1 class='result'  style='color: blue'>You are underWeight</h1>";
      } else if (num >= 18.5 && num < 25) {
        return "<h1 class='result'  style='color: green'>You are Normalweight</h1>";
      } else if (num >= 25 && num < 30) {
        return "<h1 class='result'  style='color: orange'>You are Overweight</h1>";
      } else if (num >= 30) {
        return "<h1 class='result'  style='color: red'>You are Obese</h1>";
      } else {
        return "<h1 class='result' >Please Enter your height and weight</h1>";
      }
    },
  },
});
