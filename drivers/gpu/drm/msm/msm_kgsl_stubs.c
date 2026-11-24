// SPDX-License-Identifier: GPL-2.0-only
#include <linux/errno.h>
#include <linux/types.h>
#include "msm_drv.h"
#include "msm_gpu.h"
#include "msm_gem.h"
#include "msm_mmu.h"

int msm_gpu_hw_init(struct msm_gpu *gpu) { return 0; }
int msm_gpu_init(struct drm_device *drm, struct platform_device *pdev,
 struct msm_gpu *gpu, const struct msm_gpu_funcs *funcs,
 const char *name, struct msm_gpu_config *config) { return -ENODEV; }
void msm_gpu_cleanup(struct msm_gpu *gpu) {}
void msm_gpu_submit(struct msm_gpu *gpu, struct msm_gem_submit *submit,
    struct msm_file_private *ctx) {}
void msm_gpu_retire(struct msm_gpu *gpu) {}
int msm_gpu_pm_suspend(struct msm_gpu *gpu) { return 0; }
int msm_gpu_pm_resume(struct msm_gpu *gpu) { return 0; }
bool msm_gpu_active(struct msm_gpu *gpu) { return false; }
void msm_gpu_resume_devfreq(struct msm_gpu *gpu) {}
void msm_gpu_perfcntr_start(struct msm_gpu *gpu) {}
void msm_gpu_perfcntr_stop(struct msm_gpu *gpu) {}
int msm_gpu_perfcntr_sample(struct msm_gpu *gpu, uint32_t *activetime,
    uint32_t *totaltime, uint32_t cntrs_len, uint32_t *cntrs) { return -ENODEV; }
struct msm_gem_address_space *msm_gpu_create_address_space(struct msm_gpu *gpu,
struct platform_device *pdev) { return NULL; }
void msm_gpu_crashstate_capture(struct msm_gpu *gpu, struct msm_gem_submit *submit,
char *comm, char *cmd) {}
int msm_gpu_crashstate_get(struct msm_gpu *gpu) { return -ENODEV; }
void msm_gpu_crashstate_put(struct msm_gpu *gpu) {}
struct drm_gem_object *msm_gpu_crashstate_get_bo(struct msm_gpu_state *state,
struct msm_gpu_state_bo *bo) { return NULL; }
void msm_gpu_devcoredump_read(void *data, loff_t offset, size_t count,
      void *buffer, size_t datalen) {}
void msm_gpu_devcoredump_free(void *data) {}

void msm_devfreq_init(struct msm_gpu *gpu) {}
void msm_devfreq_cleanup(struct msm_gpu *gpu) {}
int msm_devfreq_target(struct device *dev, unsigned long *freq, u32 flags) { return 0; }
int msm_devfreq_get_dev_status(struct device *dev, struct devfreq_dev_status *status) { return 0; }
int msm_devfreq_get_cur_freq(struct device *dev, unsigned long *freq) { return 0; }

struct msm_mmu *msm_iommu_new(struct device *dev, struct iommu_domain *domain) { return NULL; }
struct msm_mmu *msm_gpummu_new(struct device *dev, struct msm_gpu *gpu) { return NULL; }

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
int msm_submitqueue_query_faults(struct msm_gpu_submitqueue *queue, uint64_t *faults) { return 0; }
void msm_submitqueue_destroy(struct kref *kref) {}
