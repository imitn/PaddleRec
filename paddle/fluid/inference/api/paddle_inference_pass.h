// Generated by the paddle/fluid/framework/ir/CMakeLists.txt.  DO NOT EDIT!

#pragma once
#include "paddle/fluid/framework/ir/pass.h"
USE_PASS(graph_to_program_pass);
USE_PASS(graph_viz_pass);
USE_PASS(lock_free_optimize_pass);
USE_PASS(fc_fuse_pass);
USE_PASS(attention_lstm_fuse_pass);
USE_PASS(infer_clean_graph_pass);
USE_PASS(fc_lstm_fuse_pass);
USE_PASS(embedding_fc_lstm_fuse_pass);
USE_PASS(fc_gru_fuse_pass);
USE_PASS(seq_concat_fc_fuse_pass);
USE_PASS(multi_batch_merge_pass);
USE_PASS(conv_bn_fuse_pass);
USE_PASS(seqconv_eltadd_relu_fuse_pass);
USE_PASS(seqpool_concat_fuse_pass);
USE_PASS(repeated_fc_relu_fuse_pass);
USE_PASS(squared_mat_sub_fuse_pass);
USE_PASS(is_test_pass);
USE_PASS(conv_elementwise_add_act_fuse_pass);
USE_PASS(conv_elementwise_add2_act_fuse_pass);
USE_PASS(conv_elementwise_add_fuse_pass);
USE_PASS(conv_affine_channel_fuse_pass);
USE_PASS(transpose_flatten_concat_fuse_pass);
USE_PASS(identity_scale_op_clean_pass);
USE_PASS(sync_batch_norm_pass);
USE_PASS(runtime_context_cache_pass);
USE_PASS(quant_conv2d_dequant_fuse_pass);
USE_PASS(fillconstant_elementwisemul_fuse);
USE_PASS(shuffle_channel_detect_pass);
USE_PASS(delete_quant_dequant_op_pass);
