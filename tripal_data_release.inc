<?php

/**
 *
 */
function tripal_data_release_policy_cma_form($form, $form_state) {

  $policy = "<b>PLEASE READ BEFORE ACCESSING THE PRE-PUBLICATION C. MAXIMA GENOME SEQUENCE DATA:</b><br> <br>

The International C. maxima Genome Consortium led by National Engineering Research Center for Vegetables, China and Boyce Thompson Institute is pleased to make available the pre-publication C. maxima genome sequences for use by public and private research communities as a resource to facilitate plant biology discoveries and plant breeding programs. <br><br>
This pre-publication C. maxima genome data is made available with the understanding that users will respect the rights of those who contributed to this effort to describe the C. maxima genome in a peer-reviewed publication. By accessing these data, users agree not to publish any articles containing analyses of genes or genomic data on a whole genome or chromosome scale prior to publication of the genome by the consortium. The restricted analyses include the identification of complete sets of genomic features such as genes, gene families, regulatory elements, repeat structures, etc., and whole-genome comparisons of regions of evolutionary conservation or change. Studies of any type on the reserved data sets that are not in direct competition with those planned by the consortium may be undertaken following an agreement. Interested parties are encouraged to contact Dr. Zhangjun Fei (zf25@cornell.edu) to discuss such possibilities. <br><br>
The data may be freely downloaded and used by all who respect the restrictions descry bed above. Any use of the C. maxima genome data prior to its publication should credit \"The International C. maxima Genome Initiative\". Once moved to publication status, the C. maxima genome data are freely available for any subsequent use. <br><br>";

  $form['policy'] = array(
    '#type' => 'markup',
    '#markup' => $policy,
  );


  $form['agree'] = array(
    '#type' => 'radios',
    '#title' => t(''),
    '#options' => array(
       'Y' => t('Agree'),
       'N' => t('Disagree'),
     ),
    '#default_value' => t('Y'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#default_value' => ' Submit ',
  );

  return $form;
}

function tripal_data_release_policy_cma_form_validate($form, $form_state) {

}

function tripal_data_release_policy_cma_form_submit($form, $form_state) {
  if ($form_state['values']['agree'] == 'Y') {
    drupal_goto('ftp://www.cucurbitgenomics.org/pub/genome/Cucurbita_maxima/');
  } else {
    drupal_goto('');
  }
}

/**
 *
 */
function tripal_data_release_policy_cmo_form($form, $form_state) {

  $policy = "<b>PLEASE READ BEFORE ACCESSING THE PRE-PUBLICATION C. MOSCHATA GENOME SEQUENCE DATA:</b><br> <br>

The International C. moschata Genome Consortium led by National Engineering Research Center for Vegetables, China and Boyce Thompson Institute is pleased to make available the pre-publication C. moschata genome sequences for use by public and private research communities as a resource to facilitate plant biology discoveries and plant breeding programs. <br><br>
This pre-publication C. moschata genome data is made available with the understanding that users will respect the rights of those who contributed to this effort to describe the C. moschata genome in a peer-reviewed publication. By accessing these data, users agree not to publish any articles containing analyses of genes or genomic data on a whole genome or chromosome scale prior to publication of the genome by the consortium. The restricted analyses include the identification of complete sets of genomic features such as genes, gene families, regulatory elements, repeat structures, etc., and whole-genome comparisons of regions of evolutionary conservation or change. Studies of any type on the reserved data sets that are not in direct competition with those planned by the consortium may be undertaken following an agreement. Interested parties are encouraged to contact Dr. Zhangjun Fei (zf25@cornell.edu) to discuss such possibilities. <br><br>
The data may be freely downloaded and used by all who respect the restrictions descry bed above. Any use of the C. moschata genome data prior to its publication should credit \"The International C. moschata Genome Initiative\". Once moved to publication status, the C. moschata genome data are freely available for any subsequent use. <br><br>";

  $form['policy'] = array(
    '#type' => 'markup',
    '#markup' => $policy,
  );


  $form['agree'] = array(
    '#type' => 'radios',
    '#title' => t(''),
    '#options' => array(
       'Y' => t('Agree'),
       'N' => t('Disagree'),
     ),
    '#default_value' => t('Y'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#default_value' => ' Submit ',
  );

  return $form;
}

function tripal_data_release_policy_cmo_form_validate($form, $form_state) {

}

function tripal_data_release_policy_cmo_form_submit($form, $form_state) {
  if ($form_state['values']['agree'] == 'Y') {
    drupal_goto('ftp://www.cucurbitgenomics.org/pub/genome/Cucurbita_moschata/');
  } else {
    drupal_goto('');
  }
}


