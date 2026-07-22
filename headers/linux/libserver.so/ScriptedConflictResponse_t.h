#pragma once

enum ScriptedConflictResponse_t : uint32_t  // sizeof 0x4
{
    SS_CONFLICT_ENQUEUE = 0,
    SS_CONFLICT_INTERRUPT = 1,
};
