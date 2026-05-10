FROM debian:trixie

# Install basic development tools
RUN apt-get update \
	&& apt-get install -y sudo zsh qmk clangd

# Set `DEVCONTAINER` environment variable to help with orientation
ENV DEVCONTAINER=true
