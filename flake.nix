{

  description = "imgui-starter dev shell";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-25.05";

  outputs = { self, nixpkgs }:

  let
      
    system = "x86_64-linux";
    pkgs = import nixpkgs { inherit system; };

  in

  {

    devShells.${system}.default = pkgs.mkShell {

      buildInputs = with pkgs; [

        cmake
	gcc
	pkg-config
	glew
	glfw
	libGL
	libGLU
	xorg.libX11
	xorg.libXrandr
	xorg.libXi
	xorg.libXcursor
	xorg.libXinerama

      ];

    };

  };

}
