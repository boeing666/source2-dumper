#pragma once

enum StateValue : uint32_t  // sizeof 0x4
{
    TotalTranslation_SourceState = 0,
    TotalTranslation_TargetState = 1,
    SourceStateBlendWeight = 2,
    TargetStateBlendWeight = 3,
    Count = 4,
};
