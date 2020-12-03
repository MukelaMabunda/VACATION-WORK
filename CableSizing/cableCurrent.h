#ifndef CABLECURRENT_H
#define CABLECURRENT_H

#include "Cable.h"

class cableCurrent
{
private:
    double current = 0;

    enum hashSizes
    {
        size_1, size_1_5, size_2_5, size_4, size_6, size_10, size_16, size_25, size_35, size_50, size_70,
        size_95, size_120, size_150, size_185, size_240, size_300, size_400, size_500, size_630, size_800,
        size_1000
    };

    hashSizes hashit (double const& cableSize)
    {
        if (cableSize == 1)   return size_1;
        if (cableSize == 1.5) return size_1_5;
        if (cableSize == 2.5) return size_2_5;
        if (cableSize == 4)   return size_4;
        if (cableSize == 6)   return size_6;
        if (cableSize == 10)  return size_10;
        if (cableSize == 16)  return size_16;
        if (cableSize == 25)  return size_25;
        if (cableSize == 35)  return size_35;
        if (cableSize == 50)  return size_50;
        if (cableSize == 70)  return size_70;
        if (cableSize == 95)  return size_95;
        if (cableSize == 120) return size_120;
        if (cableSize == 150) return size_150;
        if (cableSize == 185) return size_185;
        if (cableSize == 240) return size_240;
        if (cableSize == 300) return size_300;
        if (cableSize == 400) return size_400;
        if (cableSize == 500) return size_500;
        if (cableSize == 630) return size_630;
        if (cableSize == 800) return size_800;
        if (cableSize == 1000)return size_1000;

        throw "Invalid Cable size";
    }

public:
    cableCurrent(InstallMethod method, float cableSize, unsigned int noOfCables, inFreeAir freeAir)
    {
        string cableSize_ = to_string(cableSize);
        switch (method)
        {
        case InstallMethod::Method_1:
        {
            if (noOfCables == 2 && freeAir == inFreeAir::None)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 11;
                    break;
                case size_1_5:
                    current = 14.5;
                    break;
                case size_2_5:
                    current = 19.5;
                    break;
                case size_4:
                    current = 26;
                    break;
                case size_6:
                    current = 34;
                    break;
                case size_10:
                    current = 46;
                    break;
                case size_16:
                    current = 61;
                    break;
                case size_25:
                    current = 80;
                    break;
                case size_35:
                    current = 99;
                    break;
                case size_50:
                    current = 119;
                    break;
                case size_70:
                    current = 151;
                    break;
                case size_95:
                    current = 182;
                    break;
                case size_120:
                    current = 210;
                    break;
                case size_150:
                    current = 240;
                    break;
                case size_185:
                    current = 273;
                    break;
                case size_240:
                    current = 320;
                    break;
                case size_300:
                    current = 367;
                    break;
                case size_400:
                case size_500:
                case size_630:
                case size_800:
                case size_1000:
                    throw "Invalid size for method 1";
                    break;
                }
            }
            else if ((noOfCables == 3 || noOfCables == 4) && freeAir == inFreeAir::None)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 10.5;
                    break;
                case size_1_5:
                    current = 13.5;
                    break;
                case size_2_5:
                    current = 18;
                    break;
                case size_4:
                    current = 24;
                    break;
                case size_6:
                    current = 31;
                    break;
                case size_10:
                    current = 42;
                    break;
                case size_16:
                    current = 56;
                    break;
                case size_25:
                    current = 73;
                    break;
                case size_35:
                    current = 89;
                    break;
                case size_50:
                    current = 108;
                    break;
                case size_70:
                    current = 136;
                    break;
                case size_95:
                    current = 164;
                    break;
                case size_120:
                    current = 188;
                    break;
                case size_150:
                    current = 216;
                    break;
                case size_185:
                    current = 245;
                    break;
                case size_240:
                    current = 286;
                    break;
                case size_300:
                    current = 328;
                    break;
                case size_400:
                case size_500:
                case size_630:
                case size_800:
                case size_1000:
                    throw "Invalid size for method 1";
                    break;
                }
            }
            else
            {
                throw "Invalid number of cables for the method 1";
            }
            break;
        }
        case InstallMethod::Method_2:
        {
            if (noOfCables == 2 && freeAir == inFreeAir::None)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 13.5;
                    break;
                case size_1_5:
                    current = 17.5;
                    break;
                case size_2_5:
                    current = 24;
                    break;
                case size_4:
                    current = 32;
                    break;
                case size_6:
                    current = 41;
                    break;
                case size_10:
                    current = 57;
                    break;
                case size_16:
                    current = 76;
                    break;
                case size_25:
                    current = 101;
                    break;
                case size_35:
                    current = 125;
                    break;
                case size_50:
                    current = 151;
                    break;
                case size_70:
                    current = 192;
                    break;
                case size_95:
                    current = 232;
                    break;
                case size_120:
                    current = 269;
                    break;
                case size_150:
                    current = 300;
                    break;
                case size_185:
                    current = 341;
                    break;
                case size_240:
                    current = 400;
                    break;
                case size_300:
                    current = 458;
                    break;
                case size_400:
                    current = 546;
                    break;
                case size_500:
                    current = 626;
                    break;
                case size_630:
                    current = 720;
                    break;
                case size_800:
                case size_1000:
                    throw "Invalid size for method 2";
                    break;
                }
            }
            else if ((noOfCables == 3 || noOfCables == 4) && freeAir == inFreeAir::None)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 12;
                    break;
                case size_1_5:
                    current = 15.5;
                    break;
                case size_2_5:
                    current = 21;
                    break;
                case size_4:
                    current = 28;
                    break;
                case size_6:
                    current = 36;
                    break;
                case size_10:
                    current = 50;
                    break;
                case size_16:
                    current = 68;
                    break;
                case size_25:
                    current = 89;
                    break;
                case size_35:
                    current = 110;
                    break;
                case size_50:
                    current = 134;
                    break;
                case size_70:
                    current = 171;
                    break;
                case size_95:
                    current = 207;
                    break;
                case size_120:
                    current = 239;
                    break;
                case size_150:
                    current = 262;
                    break;
                case size_185:
                    current = 296;
                    break;
                case size_240:
                    current = 346;
                    break;
                case size_300:
                    current = 394;
                    break;
                case size_400:
                    current = 467;
                    break;
                case size_500:
                    current = 533;
                    break;
                case size_630:
                    current = 611;
                    break;
                case size_800:
                case size_1000:
                    throw "Invalid size for method 1";
                    break;
                }
            }
            else
            {
                throw "Invalid number of cables for the method 1";
            }
            break;
        }
        case InstallMethod::Method_3:
        {
            if (noOfCables == 2 && freeAir == inFreeAir::None)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 15.5;
                    break;
                case size_1_5:
                    current = 20;
                    break;
                case size_2_5:
                    current = 27;
                    break;
                case size_4:
                    current = 37;
                    break;
                case size_6:
                    current = 47;
                    break;
                case size_10:
                    current = 65;
                    break;
                case size_16:
                    current = 87;
                    break;
                case size_25:
                    current = 114;
                    break;
                case size_35:
                    current = 141;
                    break;
                case size_50:
                    current = 182;
                    break;
                case size_70:
                    current = 234;
                    break;
                case size_95:
                    current = 284;
                    break;
                case size_120:
                    current = 330;
                    break;
                case size_150:
                    current = 384;
                    break;
                case size_185:
                    current = 436;
                    break;
                case size_240:
                    current = 515;
                    break;
                case size_300:
                    current = 594;
                    break;
                case size_400:
                    current = 694;
                    break;
                case size_500:
                    current = 792;
                    break;
                case size_630:
                    current = 904;
                    break;
                case size_800:
                    current = 1030;
                    break;
                case size_1000:
                    current = 1154;
                    break;
                }
            }
            else if ((noOfCables == 3 || noOfCables == 4) && freeAir == inFreeAir::None)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 14;
                    break;
                case size_1_5:
                    current = 18;
                    break;
                case size_2_5:
                    current = 25;
                    break;
                case size_4:
                    current = 33;
                    break;
                case size_6:
                    current = 43;
                    break;
                case size_10:
                    current = 59;
                    break;
                case size_16:
                    current = 79;
                    break;
                case size_25:
                    current = 104;
                    break;
                case size_35:
                    current = 129;
                    break;
                case size_50:
                    current = 167;
                    break;
                case size_70:
                    current = 214;
                    break;
                case size_95:
                    current = 261;
                    break;
                case size_120:
                    current = 303;
                    break;
                case size_150:
                    current = 349;
                    break;
                case size_185:
                    current = 400;
                    break;
                case size_240:
                    current = 472;
                    break;
                case size_300:
                    current = 545;
                    break;
                case size_400:
                    current = 634;
                    break;
                case size_500:
                    current = 723;
                    break;
                case size_630:
                    current = 826;
                    break;
                case size_800:
                    current = 943;
                    break;
                case size_1000:
                    current = 1058;
                    break;
                }
            }
            else
            {
                throw "Invalid number of cables for the method 3";
            }
            break;
        }
        case InstallMethod::Method_4:
        {
            if (noOfCables == 2 && freeAir == inFreeAir::None)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                case size_1_5:
                case size_2_5:
                case size_4:
                case size_6:
                case size_10:
                case size_16:
                    throw "Invalid size for method 4";
                    break;
                case size_25:
                    current = 126;
                    break;
                case size_35:
                    current = 156;
                    break;
                case size_50:
                    current = 191;
                    break;
                case size_70:
                    current = 246;
                    break;
                case size_95:
                    current = 300;
                    break;
                case size_120:
                    current = 349;
                    break;
                case size_150:
                    current = 404;
                    break;
                case size_185:
                    current = 463;
                    break;
                case size_240:
                    current = 549;
                    break;
                case size_300:
                    current = 635;
                    break;
                case size_400:
                    current = 732;
                    break;
                case size_500:
                    current = 835;
                    break;
                case size_630:
                    current = 953;
                    break;
                case size_800:
                    current = 1086;
                    break;
                case size_1000:
                    current = 1216;
                    break;
                }
            }
            else if ((noOfCables == 3 || noOfCables == 4) && freeAir == inFreeAir::None)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                case size_1_5:
                case size_2_5:
                case size_4:
                case size_6:
                case size_10:
                case size_16:
                    throw "Invalid size for method";
                    break;
                case size_25:
                    current = 112;
                    break;
                case size_35:
                    current = 141;
                    break;
                case size_50:
                    current = 172;
                    break;
                case size_70:
                    current = 223;
                    break;
                case size_95:
                    current = 273;
                    break;
                case size_120:
                    current = 318;
                    break;
                case size_150:
                    current = 369;
                    break;
                case size_185:
                    current = 424;
                    break;
                case size_240:
                    current = 504;
                    break;
                case size_300:
                    current = 584;
                    break;
                case size_400:
                    current = 679;
                    break;
                case size_500:
                    current = 778;
                    break;
                case size_630:
                    current = 892;
                    break;
                case size_800:
                    current = 1020;
                    break;
                case size_1000:
                    current = 1149;
                    break;
                }
            }
            else
            {
                throw "Invalid number of cables for the method 4";
            }
            break;
        }
        case InstallMethod::Method_5:
        {
            if (noOfCables == 2 || noOfCables == 3 || noOfCables == 4)
            {
                if (freeAir == inFreeAir::Horizontal)
                {
                    switch (hashit(cableSize))
                    {
                    case size_1:
                    case size_1_5:
                    case size_2_5:
                    case size_4:
                    case size_6:
                    case size_10:
                    case size_16:
                        throw "Invalid size for method 5";
                        break;
                    case size_25:
                        current = 146;
                        break;
                    case size_35:
                        current = 181;
                        break;
                    case size_50:
                        current = 219;
                        break;
                    case size_70:
                        current = 281;
                        break;
                    case size_95:
                        current = 341;
                        break;
                    case size_120:
                        current = 396;
                        break;
                    case size_150:
                        current = 456;
                        break;
                    case size_185:
                        current = 521;
                        break;
                    case size_240:
                        current = 615;
                        break;
                    case size_300:
                        current = 709;
                        break;
                    case size_400:
                        current = 852;
                        break;
                    case size_500:
                        current = 982;
                        break;
                    case size_630:
                        current = 1138;
                        break;
                    case size_800:
                        current = 1265;
                        break;
                    case size_1000:
                        current = 1420;
                        break;
                    }
                }
                else if (freeAir == inFreeAir::Vertical)
                {
                    switch (hashit(cableSize))
                    {
                    case size_1:
                    case size_1_5:
                    case size_2_5:
                    case size_4:
                    case size_6:
                    case size_10:
                    case size_16:
                        throw "Invalid size for method";
                        break;
                    case size_25:
                        current = 130;
                        break;
                    case size_35:
                        current = 162;
                        break;
                    case size_50:
                        current = 197;
                        break;
                    case size_70:
                        current = 254;
                        break;
                    case size_95:
                        current = 311;
                        break;
                    case size_120:
                        current = 362;
                        break;
                    case size_150:
                        current = 419;
                        break;
                    case size_185:
                        current = 480;
                        break;
                    case size_240:
                        current = 569;
                        break;
                    case size_300:
                        current = 659;
                        break;
                    case size_400:
                        current = 795;
                        break;
                    case size_500:
                        current = 920;
                        break;
                    case size_630:
                        current = 1070;
                        break;
                    case size_800:
                        current = 1188;
                        break;
                    case size_1000:
                        current = 1337;
                        break;
                    }
                }
                else if (freeAir == inFreeAir::Trefoil)
                {
                    switch (hashit(cableSize))
                    {
                    case size_1:
                    case size_1_5:
                    case size_2_5:
                    case size_4:
                    case size_6:
                    case size_10:
                    case size_16:
                        throw "Invalid size for method 5";
                        break;
                    case size_25:
                        current = 110;
                        break;
                    case size_35:
                        current = 137;
                        break;
                    case size_50:
                        current = 167;
                        break;
                    case size_70:
                        current = 216;
                        break;
                    case size_95:
                        current = 264;
                        break;
                    case size_120:
                        current = 308;
                        break;
                    case size_150:
                        current = 356;
                        break;
                    case size_185:
                        current = 409;
                        break;
                    case size_240:
                        current = 485;
                        break;
                    case size_300:
                        current = 561;
                        break;
                    case size_400:
                        current = 656;
                        break;
                    case size_500:
                        current = 749;
                        break;
                    case size_630:
                        current = 855;
                        break;
                    case size_800:
                        current = 971;
                        break;
                    case size_1000:
                        current = 1079;
                        break;
                    }
                }
                else
                {
                    throw "Invalid installation for (in free air) choose between Horizontal/Vertical flat spaced and Trefoil";
                }
            }
            else
            {
                throw "Invalid number of cables for the method 5";
            }
        }
        break;
        }
    }

    double getCableCurrent ()
    {
        return current;
    }
};

#endif // CABLECURRENT_H
