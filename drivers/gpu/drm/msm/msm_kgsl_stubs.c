// SPDX-License-Identifier: GPL-2.0-only
#include <linux/errno.h>
#include <linux/types.h>
#include "msm_drv.h"
#include "msm_gpu.h"

int msm_gpu_hw_init(struct msm_gpu *gpu) { return 0; }
void msm_gpu_submit(struct msm_gpu *gpu, struct msm_gem_submit *submit,
    struct msm_file_private *ctx) {}

int msm_perf_debugfs_init(struct drm_minor *minor) { return 0; }
void msm_perf_debugfs_cleanup(struct msm_drm_private *priv) {}

int msm_submitqueue_init(struct drm_device *drm, struct msm_file_private *ctx) { return 0; }
void msm_submitqueue_close(struct msm_file_private *ctx) {}
struct msm_gpu_submitqueue *msm_submitqueue_get(struct msm_file_private *ctx, u32 id) { return NULL; }
void msm_submitqueue_put(struct msm_gpu_submitqueue *queue) {}
int msm_submitqueue_create(struct drm_device *drm, struct msm_file_private *ctx,
   u32 prio, u32 flags, u32 *id) { return -ENODEV; }
int msm_submitqueue_query(struct drm_device *drm, struct msm_file_private *ctx,
  struct drm_msm_submitqueue_query *args) { return -ENODEV; }
int msm_submitqueue_remove(struct msm_file_private *ctx, u32 id) { return -ENOENT; }
