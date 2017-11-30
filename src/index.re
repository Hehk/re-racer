open Utils;
requireCSS("tachyons/css/tachyons.css");

ReactDOMRe.renderToElementWithId(<App />, "root");

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";
register_service_worker();
