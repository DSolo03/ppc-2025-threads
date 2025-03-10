#pragma once

#include <utility>
#include <vector>

#include "core/task/include/task.hpp"

namespace solovyev_d_shell_sort_simple_omp {

class TaskOMP : public ppc::core::Task {
 public:
  explicit TaskOMP(ppc::core::TaskDataPtr task_data) : Task(std::move(task_data)) {}
  bool PreProcessingImpl() override;
  bool ValidationImpl() override;
  bool RunImpl() override;
  bool PostProcessingImpl() override;

 private:
  std::vector<int> input_, output_;
};

}  // namespace solovyev_d_shell_sort_simple_omp