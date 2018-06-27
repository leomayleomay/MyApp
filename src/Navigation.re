module Config = {
  type route =
    | Home
    | LostDetails;
};

include RerouteNative.ReRoute.CreateNavigation(Config);