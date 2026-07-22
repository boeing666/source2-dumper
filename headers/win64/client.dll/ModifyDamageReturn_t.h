#pragma once

enum ModifyDamageReturn_t : uint32_t  // sizeof 0x4
{
    CONTINUE_TO_APPLY_DAMAGE = 0,
    ABORT_DO_NOT_APPLY_DAMAGE = 1,
};
