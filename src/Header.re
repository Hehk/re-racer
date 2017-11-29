open Utils;

let component = ReasonReact.statelessComponent("Header");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <nav className="dt w-100 mw8 center">
      <div className="dtc v-mid pa3">
        <a href="/" className="dib h2 pa1 ba b--white-90 border-box no-underline b black">
          (textEl("Code Racer"))
        </a>
      </div>
      <div className="dtc v-mid tr pa3">
        <a className="f6 fw4 hover-white no-underline black dn dib-ns pv2 ph3" href="/">
          (textEl("How it Works"))
        </a>
        <a className="f6 fw4 hover-white no-underline black dn dib-ns pv2 ph3" href="/">
          (textEl("Why?"))
        </a>
        <a
          className="f6 fw4 hover-white no-underline black dib ml2 pv2 ph3 ba" href="/">
          (textEl("Sign Up"))
        </a>
      </div>
    </nav>
};
