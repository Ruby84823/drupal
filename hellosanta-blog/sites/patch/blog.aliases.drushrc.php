<?php
// local alias
$local_sites = '/usr/share/nginx/www/';
$aliases['demo.local'] = array(
  'root' => $local_sites ,
  'path-aliases' => array(
    '%dump-dir' => $local_sites . 'drush.dbdumps',
    '%files' => $local_sites . '/sites/default/files'
  )
);


// remote alias
$remote_sites = '/usr/share/nginx/www/';
$aliases['dev'] = array(
  'remote-host' => '60.248.35.70',
  'remote-user' => 'root',
  'ssh-options' => '-p 2225 -o PasswordAuthentication=no -i '.drush_server_home().'/.ssh/develop_server.key',
  'root' => $remote_sites  ,
  'path-aliases' => array(
    '%dump-dir' => '/home/root/drush.dbdumps',
    '%files' => $remote_sites . '/sites/default/files'
  )
);
