#pragma once

enum EPingSubjectSourceContext_t : uint32_t  // sizeof 0x4
{
    k_ePingSourceContext_Any = 0,
    k_ePingSourceContext_Positional = 1,
    k_ePingSourceContext_Roster = 2,
};
