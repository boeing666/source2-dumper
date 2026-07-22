#pragma once

enum EAbilityInterruptType : uint32_t  // sizeof 0x4
{
    EAbilityInterruptNone = 0,
    EAbilityInterruptCancel = 1,
    EAbilityInterruptExternal = 2,
};
