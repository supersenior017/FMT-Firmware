/******************************************************************************
 * Copyright 2020-2021 The Firmament Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#include <firmament.h>
#include <string.h>

#include "module/work_queue/workqueue_manager.h"

#define MAX_WQ_SIZE 10

WorkQueue_t wq_list[MAX_WQ_SIZE] = { NULL };

WorkQueue_t workqueue_find(const char* name)
{
    for (int i = 0; i < MAX_WQ_SIZE; i++) {
        if (wq_list[i] == NULL) {
            break;
        }
        if (strcmp(wq_list[i]->thread->name, name) == 0) {
            return wq_list[i];
        }
    }
    return NULL;
}

fmt_err workqueue_manager_init(void)
{
    wq_list[0] = workqueue_create("wq:system", 20, 10240, 19);
    if (wq_list[0] == NULL) {
        return FMT_ERROR;
    }

    return FMT_EOK;
}
