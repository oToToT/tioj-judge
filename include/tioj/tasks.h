#ifndef TIOJ_TASKS_H_
#define TIOJ_TASKS_H_

#define ENUM_TASK_TYPE_ \
  X(COMPILE) \
  X(EXECUTE) \
  X(SCORING) /* special judge */ \
  X(FINALIZE)
enum class TaskType {
#define X(name) name,
  ENUM_TASK_TYPE_
#undef X
};

#define ENUM_COMPILE_SUBTASK_ \
  X(USERPROG) \
  X(SPECJUDGE)
enum class CompileSubtask : int {
#define X(name) name,
  ENUM_COMPILE_SUBTASK_
#undef X
};

#endif  // TIOJ_TASKS_H_
