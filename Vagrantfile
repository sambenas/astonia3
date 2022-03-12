# -*- mode: ruby -*-
# vi: set ft=ruby :

$script = <<-SCRIPT
sudo apt-get update -y
sudo apt-get install -y gcc-multilib make libmysqlclient-dev
SCRIPT

Vagrant.configure("2") do |config|

  # libmysqlclient-dev might not be on jammy repo yet?
  config.vm.box = "ubuntu/bionic64"

  config.vm.network "private_network", ip: "192.168.56.130"
  config.ssh.forward_agent = true

  # Install development dependencies
  config.vm.provision "shell", inline: $script

end
