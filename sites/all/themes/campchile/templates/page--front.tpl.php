<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */

?>
<div class="l-page">
  <div class="preheader">
    <div class="container">
      <?php if ($logged_in): ?>
      <?php print render($secondary_nav); ?>
      <?php else: ?>
      <nav class="log-register">
          <ul>
              <li><?php print l(t('Login'), 'user', array()); ?></li>
              <li><?php print l(t('Register'), 'user/register', array()); ?></li>
          </ul>
      </nav>
      <?php endif; ?>
    </div>
  </div>
  <header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
    <div class="container">
      <div class="navbar-header">
        <?php if ($logo): ?>
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
        <?php endif; ?>

        <?php if (!empty($site_name)): ?>
        <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
        <?php endif; ?>

        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      </div>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="navbar-collapse collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
            <?php //print render($secondary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>
    </div>
  </header>

  <!-- <div class="main-container"> -->

    <div class="home-banner col-xs-12">
<!--       <div>
        <p><h1>Thanks!</h1></p>
      </div> -->
      <!-- <div class="logo"> -->
        <?php // print theme('image', array('path' => 'sites/all/themes/campchile/images/logo-1024.png', 'attributes' => array('class' => ''))) ?>
      <!-- </div> -->

      <?php //if ($logged_in): ?>

        <!-- <div class="register-button"> -->


          <?php //print l(t('Check the schedule'), 'node/87', array('attributes'=>array('class' => 'col-xs-12 col-sm-3 col-sm-pull-1 col-sm-push-2'))); ?>

          <?php //print l(t('Register'), 'node/28', array('attributes'=>array('class' => 'col-xs-12 col-sm-3 col-sm-pull-1 col-sm-push-4'))); ?>

        <!-- </div> -->

      <?php //else: ?>

        <!-- <div class="register-button"> -->
          <?php //print l(t('Login'), 'user', array('attributes'=>array('class' => 'col-xs-12 col-sm-3 col-sm-pull-1 col-sm-push-2'))); ?>
        <!-- </div> -->
        
        <!-- <div class="register-button"> -->
          <?php //print l(t('Sign Up'), 'user/register', array('attributes'=>array('class' => 'col-xs-12 col-sm-3 col-sm-pull-1 col-sm-push-4'))); ?>
        <!-- </div> -->

      <!-- </div> -->

      <?php //endif; ?>


    </div>

    <div class="container">

      <?php if (!empty($page['sidebar_first'])): ?>
        <aside class="col-sm-3" role="complementary">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>

      <section<?php print $content_column_class; ?>>
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
        <?php endif; ?>
        <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if (!empty($title)): ?>
          <h1 class="page-header"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php //print render($page['content']); ?>
      </section>

      <?php if (!empty($page['sidebar_second'])): ?>
        <aside class="col-sm-3" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
      <?php endif; ?>

    </div>
    
    <div class="home-speakers col-xs-12">


      <?php

      $view = views_get_view('cod_cl_users_list');
      $view->execute_display('block_featured');
      print $view->render();

      ?>

<!--       <h2><?php print t('Speakers'); ?></h2>

      <div class="speaker col-xs-10 col-xs-push-1 col-sm-6 col-md-3 col-lg-3 col-sm-push-0">
        <figure>
          <img src="<?php print $base_path; ?>sites/all/themes/campchile/images/marcelo-garrido.jpg" alt="Marcelo Garrido"/>
          <h3>Marcelo Garrido</h3>
          <p>Ph.D. en interacción humano-computador</p>
        </figure>
      </div>

      <div class="speaker col-xs-10 col-xs-push-1 col-sm-6 col-md-3 col-lg-3 col-sm-push-0">
        <figure>
          <img src="<?php print $base_path; ?>sites/all/themes/campchile/images/claudia-gutierrez.jpg" alt="Claudia Gutierrez"/>
          <h3>Claudia Gutierrez</h3>
          <p>Directora de UXPA para Latam</p>
          <p>Twitter: <a href="https://twitter.com/cgutierh">@cgutierh</a></p>
        </figure>
      </div>

      <div class="speaker col-xs-10 col-xs-push-1 col-sm-6 col-md-3 col-lg-3 col-sm-push-0">
        <figure>
          <img src="<?php print $base_path; ?>sites/all/themes/campchile/images/angeles-navarro.jpg" alt="Ángeles Navarro"/>
          <h3>Ángeles Navarro</h3>
          <p>Global Networks Director @startupchile</p>
          <p>Twitter: <a href="https://twitter.com/MAngelesNC">@MAngelesNC</a></p>
        </figure>
      </div>

      <div class="speaker col-xs-10 col-xs-push-1 col-sm-6 col-md-3 col-lg-3 col-sm-push-0">
        <figure>
          <img src="<?php print $base_path; ?>sites/all/themes/campchile/images/tadashi-takaoka.jpg" alt="Tadashi Takaoka"/>
          <h3>Tadashi Takaoka</h3>
          <p>Subgerente Financiamiento temprano de Corfo</p>
          <p>Twitter: <a href="https://twitter.com/TadashiTakaoka">@TadashiTakaoka</a></p>
        </figure>
      </div> -->

        <div class="view-list-button col-xs-12">
          <?php print l(t('View List'), 'speakers', array('attributes'=>array('class' => ''))); ?>
        </div>

    </div>

    <div class="home-sponsors col-xs-12">

      <h2><?php print t('Sponsors'); ?></h2>

      <div class="sponsor">
        <a href="node/17"><img src="http://live-campchile.pantheon.io/sites/default/files/styles/medium/public/drupal-association-logo-rgb.png?itok=Q3u7c4zg" alt=""></a>
      </div>

    </div>

    <div class="home-tracks col-xs-12">

      <h2><?php print t('Tracks'); ?></h2>

      <div class="track col-xs-10 col-sm-3">
        <a href="taxonomy/term/6" data-toggle="tooltip" data-placement="top" title="Ver detalles de track UI/UX"><img src="<?php print $base_path; ?>sites/all/themes/campchile/images/track-ux-ui.png" alt="UX/UI"></a>
        <h3><?php print t('UI/UX'); ?></h3>
      </div>

      <div class="track col-xs-10 col-sm-3">
        <a href="taxonomy/term/7" data-toggle="tooltip" data-placement="top" title="Ver detalles de track Code, dev-ops"><img src="<?php print $base_path; ?>sites/all/themes/campchile/images/track-dev-ops.png" alt="Dev-ops"></a>
        <h3><?php print t('Code, dev-ops'); ?></h3>
      
      </div>

      <div class="track col-xs-10 col-sm-3">
        <a href="taxonomy/term/8" data-toggle="tooltip" data-placement="top" title="Ver detalles de track Bussines, use cases"><img src="<?php print $base_path; ?>sites/all/themes/campchile/images/track-bussines-use_cases.png" alt="Bussines-Use cases"></a>
        <h3><?php print t('Bussines, use cases'); ?></h3>
      
      </div>

      

    </div>

    <div class="home-sedes col-xs-12">

      <h2><?php print t('Venue'); ?></h2>

      <div class="sede col-xs-12 col-sm-6">
        <?php print l('<img data-toggle="tooltip" data-placement="top" title="Ver sede" src="' . $base_path . 'sites/all/themes/campchile/images/cepal.jpg"' . ' alt="CEPAL">', 'node/20', array('html' => TRUE)); ?>
        <p>CEPAL - Av. Dag Hammarskjold 3477, Vitacura</p>
      </div>

      <div class="sede col-xs-12 col-sm-6">
        <?php print l('<img data-toggle="tooltip" data-placement="top" title="Ver sede" src="' . $base_path . 'sites/all/themes/campchile/images/ucentral.jpg"' . ' alt="Universidad Central">', 'node/21', array('html' => TRUE)); ?>
        <p>Universidad Central - Av. Santa Isabel 1186, Santiago</p>
      </div>

    </div>

    <header role="banner" id="page-header">
      <?php if (!empty($site_slogan)): ?>
        <p class="lead"><?php print $site_slogan; ?></p>
      <?php endif; ?>

      <?php print render($page['header']); ?>
    </header> <!-- /#page-header -->


  <!-- </div> -->
  <footer class="footer">
      <div class="footer-text col-xs-6">
        <?php print render($page['footer']); ?>
        <div class="sponsors">
          <ul>
            <li><a href="node/17"><img src="http://live-campchile.pantheon.io/sites/default/files/styles/medium/public/drupal-association-logo-rgb.png?itok=Q3u7c4zg" alt=""></a></li>
            <li><a href="node/56"><img src="http://live-campchile.pantheon.io/sites/default/files/styles/medium/public/tifon.png?itok=S-DwRatm" alt=""></a></li>
          </ul>
        </div>
      </div>
      <div class="social col-xs-6">
        <ul>
          <li><a href="https://groups.drupal.org/chile" target="_blank" data-toggle="tooltip" data-placement="top" title="Comunidad en Drupal Groups"><i class="fa fa-3x fa-drupal"></i></a></li>
          <li><a href="https://www.facebook.com/drupalchile/" target="_blank" data-toggle="tooltip" data-placement="top" title="Comunidad en Facebook"><i class="fa fa-3x fa-facebook-square"></i></a></li>
          <li><a href="https://www.flickr.com/groups/drupalchile/" target="_blank" data-toggle="tooltip" data-placement="top" title="Grupo en Flickr"><i class="fa fa-3x fa-flickr"></i></a></li>
          <li><a href="https://github.com/DrupalChile" target="_blank" data-toggle="tooltip" data-placement="top" title="Organización en GitHub"><i class="fa fa-3x fa-github-square"></i></a></li>
          <li><a href="http://www.meetup.com/Drupal-Chile" target="_blank" data-toggle="tooltip" data-placement="top" title="Grupo en Meetup"><i class="fa fa-3x fa-calendar"></i></a></li>
          <li><a href="https://twitter.com/drupalcl" target="_blank" data-toggle="tooltip" data-placement="top" title="Perfil en Twitter"><i class="fa fa-3x fa-twitter-square"></i></a></li>
          <li><a href="https://plus.google.com/u/0/b/108365020953753280036/108365020953753280036/posts" target="_blank" data-toggle="tooltip" data-placement="top" title="Pagina en Google+"><i class="fa fa-3x fa-google-plus-square"></i></a></li>
        </ul>
      </div>  
  </footer>
</div>
