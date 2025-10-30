{

  description = "imgui-starter dev shell";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-20.05";

  outputs = { self, nixpkgs }: {

    devShells.default = nixpkgs.lib.mkShell {

      buildInputs = with nixpkgs; [

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
