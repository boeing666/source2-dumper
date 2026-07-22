#pragma once

enum EAIScheduleEndedReason : uint32_t  // sizeof 0x4
{
    SCHEDULE_SUCCEEDED = 0,
    SCHEDULE_INTERRUPTED = 1,
    SCHEDULE_TASK_FAILED = 2,
};
