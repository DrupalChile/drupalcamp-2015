api = 2
core = 7.x

; Download Drupal core and apply core patches if needed.
projects[drupal][type] = "core"
projects[drupal][version] = "7.41"

; This patch allows install profile to list requirements on the install page
; http://drupal.org/node/1971072
projects[drupal][patch][] = http://drupal.org/files/install_profile_requirements_on_install.patch

; This patch allows install profiles to set a minimum memory limit.
; http://drupal.org/node/1772316#comment-6457618
projects[drupal][patch][] = http://drupal.org/files/issues/drupal-7.x-allow_profile_change_sys_req-1772316-28.patch

; Allow to specify SCRIPT HTML element attributes through drupal_add_js()
; http://drupal.org/node/1664602#comment-6221066
projects[drupal][patch][] = http://drupal.org/files/1664602-1.patch