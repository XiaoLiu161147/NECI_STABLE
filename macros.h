#define LogAlloc(ERR,NAME,LEN,SIZE,TAG) CALL LogMemAlloc(NAME,LEN,SIZE,this_routine,TAG)
#define LogDealloc(TAG) CALL LogMemDealloc(this_routine,TAG)
#define IsNullDet(nI) (nI(1).eq.0)
#define IsOcc(ilut,orb) btest(ilut((orb-1)/32), mod(orb-1,32))
#define IsNotOcc(ilut,orb) (.not.IsOcc(ilut,orb))
#define IsDoub(ilut,orb) (IsOcc(ilut,orb).and.IsOcc(ilut,ieor(orb-1,1)+1))
#define is_beta(orb) btest(orb, 0)
#define is_alpha(orb) (.not.IsBeta(orb))
#define is_in_pair(orb1,orb2) (ibclr(orb1-1,0) == ibclr(orb2-1,0))
