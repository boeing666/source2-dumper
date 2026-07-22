#pragma once

enum UnreachableCallReason_t : uint32_t  // sizeof 0x4
{
    IS_TARGET_UNREACHABLE = 0,
    MARK_TARGET_AS_UNREACHABLE = 1,
};
