#ifndef UUID140673960480576
#define UUID140673960480576

/**
  * RandomForestClassifier(base_estimator=DecisionTreeClassifier(), bootstrap=True, ccp_alpha=0.0, class_name=RandomForestClassifier, class_weight=None, criterion=gini, estimator_params=('criterion', 'max_depth', 'min_samples_split', 'min_samples_leaf', 'min_weight_fraction_leaf', 'max_features', 'max_leaf_nodes', 'min_impurity_decrease', 'random_state', 'ccp_alpha'), max_depth=None, max_features=sqrt, max_leaf_nodes=None, max_samples=None, min_impurity_decrease=0.0, min_samples_leaf=1, min_samples_split=2, min_weight_fraction_leaf=0.0, n_estimators=10, n_jobs=None, num_outputs=3, oob_score=False, package_name=everywhereml.sklearn.ensemble, random_state=None, template_folder=everywhereml/sklearn/ensemble, verbose=0, warm_start=False)
 */
class RandomForestClassifier {
    public:

        /**
         * Predict class from features
         */
        int predict(float *x) {
            int predictedValue = 0;
            size_t startedAt = micros();

            
                    
            uint16_t votes[3] = { 0 };
            uint8_t classIdx = 0;
            float classScore = 0;

            
                tree0(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree1(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree2(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree3(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree4(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree5(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree6(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree7(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree8(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree9(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            

            // return argmax of votes
            uint8_t maxClassIdx = 0;
            float maxVote = votes[0];

            for (uint8_t i = 1; i < 3; i++) {
                if (votes[i] > maxVote) {
                    maxClassIdx = i;
                    maxVote = votes[i];
                }
            }

            predictedValue = maxClassIdx;

                    

            latency = micros() - startedAt;

            return (lastPrediction = predictedValue);
        }

        
            
            /**
             * Get latency in micros
             */
            uint32_t latencyInMicros() {
                return latency;
            }

            /**
             * Get latency in millis
             */
            uint16_t latencyInMillis() {
                return latency / 1000;
            }
            

    protected:
        float latency = 0;
        int lastPrediction = 0;

        
            

        
            
                /**
                 * Random forest's tree #0
                 */
                void tree0(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[1] <= 2.8453532457351685) {
                            
                                
                        if (x[1] <= 1.3002896308898926) {
                            
                                
                        if (x[1] <= 0.7212541103363037) {
                            
                                
                        if (x[1] <= 0.5066465586423874) {
                            
                                
                        *classIdx = 1;
                        *classScore = 35.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 35.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 1.4050120115280151) {
                            
                                
                        if (x[0] <= 0.9203948378562927) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 35.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 2.2261910438537598) {
                            
                                
                        if (x[1] <= 1.7741394639015198) {
                            
                                
                        if (x[1] <= 1.6770128011703491) {
                            
                                
                        *classIdx = 1;
                        *classScore = 35.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 2.0217795968055725) {
                            
                                
                        *classIdx = 1;
                        *classScore = 35.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 2.105776309967041) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 35.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 2.322517514228821) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.5226339474320412) {
                            
                                
                        if (x[1] <= 2.528783440589905) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 32.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 35.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.062972784042358) {
                            
                                
                        if (x[0] <= -0.20557855442166328) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 32.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -1.8008280992507935) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.7546915709972382) {
                            
                                
                        if (x[1] <= 4.305071592330933) {
                            
                                
                        if (x[0] <= -0.0006479322910308838) {
                            
                                
                        *classIdx = 0;
                        *classScore = 32.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 32.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 32.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #1
                 */
                void tree1(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[0] <= -0.3076997548341751) {
                            
                                
                        if (x[1] <= 4.062972784042358) {
                            
                                
                        *classIdx = 2;
                        *classScore = 39.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.27597188949585) {
                            
                                
                        *classIdx = 0;
                        *classScore = 28.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.70915150642395) {
                            
                                
                        *classIdx = 2;
                        *classScore = 39.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 28.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 2.8453532457351685) {
                            
                                
                        if (x[0] <= 0.47395316511392593) {
                            
                                
                        *classIdx = 0;
                        *classScore = 28.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.8646459877490997) {
                            
                                
                        if (x[0] <= 0.742299348115921) {
                            
                                
                        *classIdx = 0;
                        *classScore = 28.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 39.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 28.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #2
                 */
                void tree2(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[1] <= 2.2261910438537598) {
                            
                                
                        if (x[0] <= 0.24492481350898743) {
                            
                                
                        *classIdx = 2;
                        *classScore = 34.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 27.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.813979148864746) {
                            
                                
                        if (x[1] <= 3.1540441513061523) {
                            
                                
                        if (x[0] <= -0.37117813900113106) {
                            
                                
                        *classIdx = 2;
                        *classScore = 34.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.673804521560669) {
                            
                                
                        *classIdx = 0;
                        *classScore = 39.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 1.654856264591217) {
                            
                                
                        *classIdx = 1;
                        *classScore = 27.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 39.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.4034827947616577) {
                            
                                
                        *classIdx = 2;
                        *classScore = 34.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.5013025999069214) {
                            
                                
                        *classIdx = 0;
                        *classScore = 39.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 34.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.446833610534668) {
                            
                                
                        if (x[0] <= -1.1853773184120655) {
                            
                                
                        *classIdx = 2;
                        *classScore = 34.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 39.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.533578157424927) {
                            
                                
                        *classIdx = 2;
                        *classScore = 34.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 5.176790952682495) {
                            
                                
                        if (x[0] <= -0.757171031087637) {
                            
                                
                        *classIdx = 2;
                        *classScore = 34.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 39.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 39.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #3
                 */
                void tree3(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[1] <= 3.8640373945236206) {
                            
                                
                        if (x[0] <= 0.8691924214363098) {
                            
                                
                        if (x[0] <= -0.24976365640759468) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.4927583932876587) {
                            
                                
                        *classIdx = 0;
                        *classScore = 36.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 2.8453532457351685) {
                            
                                
                        *classIdx = 1;
                        *classScore = 31.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 36.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.634343385696411) {
                            
                                
                        if (x[0] <= -1.1163866817951202) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 36.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 36.0;
                        return;

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #4
                 */
                void tree4(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[1] <= 2.2261910438537598) {
                            
                                
                        if (x[1] <= 1.3002896308898926) {
                            
                                
                        if (x[0] <= -0.4049113988876343) {
                            
                                
                        *classIdx = 2;
                        *classScore = 32.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 43.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 1.8525055646896362) {
                            
                                
                        if (x[1] <= 1.8289105296134949) {
                            
                                
                        if (x[1] <= 1.3030258417129517) {
                            
                                
                        *classIdx = 2;
                        *classScore = 32.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -0.1404176950454712) {
                            
                                
                        *classIdx = 2;
                        *classScore = 32.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 43.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 32.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 43.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.813979148864746) {
                            
                                
                        if (x[0] <= -0.1251949444413185) {
                            
                                
                        *classIdx = 2;
                        *classScore = 32.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 1.4547258615493774) {
                            
                                
                        *classIdx = 0;
                        *classScore = 25.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 43.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.203420162200928) {
                            
                                
                        *classIdx = 0;
                        *classScore = 25.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -1.5859326720237732) {
                            
                                
                        *classIdx = 2;
                        *classScore = 32.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.6323449313640594) {
                            
                                
                        *classIdx = 0;
                        *classScore = 25.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.343590259552002) {
                            
                                
                        *classIdx = 2;
                        *classScore = 32.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 25.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #5
                 */
                void tree5(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[1] <= 2.8453532457351685) {
                            
                                
                        if (x[0] <= 0.4366334304213524) {
                            
                                
                        if (x[0] <= -0.15589187294244766) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 29.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 38.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -0.3076997548341751) {
                            
                                
                        if (x[0] <= -1.1625728607177734) {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -0.6537416577339172) {
                            
                                
                        *classIdx = 0;
                        *classScore = 29.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.8821840286254883) {
                            
                                
                        if (x[1] <= 3.465661644935608) {
                            
                                
                        *classIdx = 0;
                        *classScore = 29.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 29.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #6
                 */
                void tree6(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[0] <= -0.33839668333530426) {
                            
                                
                        if (x[0] <= -1.5859326720237732) {
                            
                                
                        *classIdx = 2;
                        *classScore = 39.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -1.4684751629829407) {
                            
                                
                        *classIdx = 0;
                        *classScore = 27.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.25397801399231) {
                            
                                
                        *classIdx = 2;
                        *classScore = 39.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 27.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 2.821487307548523) {
                            
                                
                        *classIdx = 1;
                        *classScore = 34.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.343590259552002) {
                            
                                
                        if (x[1] <= 4.185506820678711) {
                            
                                
                        *classIdx = 0;
                        *classScore = 27.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 39.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 27.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #7
                 */
                void tree7(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[0] <= -0.3076997548341751) {
                            
                                
                        if (x[0] <= -0.7703503966331482) {
                            
                                
                        if (x[1] <= 4.902410268783569) {
                            
                                
                        *classIdx = 2;
                        *classScore = 31.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 40.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.8320964574813843) {
                            
                                
                        *classIdx = 2;
                        *classScore = 31.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 40.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 2.8453532457351685) {
                            
                                
                        if (x[0] <= 0.5226339474320412) {
                            
                                
                        *classIdx = 0;
                        *classScore = 40.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 29.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.203420162200928) {
                            
                                
                        *classIdx = 0;
                        *classScore = 40.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.6323449313640594) {
                            
                                
                        *classIdx = 0;
                        *classScore = 40.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.7546915709972382) {
                            
                                
                        *classIdx = 2;
                        *classScore = 31.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 40.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #8
                 */
                void tree8(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[1] <= 3.019504427909851) {
                            
                                
                        if (x[1] <= 2.8715449571609497) {
                            
                                
                        if (x[1] <= 2.7466317415237427) {
                            
                                
                        if (x[1] <= 1.8289105296134949) {
                            
                                
                        if (x[1] <= 1.5585139393806458) {
                            
                                
                        if (x[0] <= 0.42847126722335815) {
                            
                                
                        *classIdx = 2;
                        *classScore = 36.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -0.15589187294244766) {
                            
                                
                        *classIdx = 2;
                        *classScore = 36.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.4366334304213524) {
                            
                                
                        *classIdx = 0;
                        *classScore = 31.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 33.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 36.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -1.1625728607177734) {
                            
                                
                        *classIdx = 2;
                        *classScore = 36.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.9021643102169037) {
                            
                                
                        if (x[0] <= 0.6323449313640594) {
                            
                                
                        if (x[1] <= 3.590422034263611) {
                            
                                
                        if (x[1] <= 3.179882526397705) {
                            
                                
                        *classIdx = 0;
                        *classScore = 31.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 36.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 31.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 36.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 31.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #9
                 */
                void tree9(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[1] <= 2.862527012825012) {
                            
                                
                        if (x[1] <= 2.2261910438537598) {
                            
                                
                        if (x[1] <= 0.6919220089912415) {
                            
                                
                        *classIdx = 1;
                        *classScore = 34.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.24492481350898743) {
                            
                                
                        *classIdx = 2;
                        *classScore = 40.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 34.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[0] <= -0.2907945290207863) {
                            
                                
                        *classIdx = 2;
                        *classScore = 40.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.5226339474320412) {
                            
                                
                        *classIdx = 0;
                        *classScore = 26.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 34.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.8640373945236206) {
                            
                                
                        if (x[0] <= -0.24976365640759468) {
                            
                                
                        *classIdx = 2;
                        *classScore = 40.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 3.656026601791382) {
                            
                                
                        *classIdx = 0;
                        *classScore = 26.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 40.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.203420162200928) {
                            
                                
                        *classIdx = 0;
                        *classScore = 26.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.533578157424927) {
                            
                                
                        *classIdx = 2;
                        *classScore = 40.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 4.902410268783569) {
                            
                                
                        if (x[1] <= 4.806992053985596) {
                            
                                
                        if (x[0] <= -1.12453693151474) {
                            
                                
                        *classIdx = 2;
                        *classScore = 40.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 26.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 40.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 26.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                }
            
        


            
};



static RandomForestClassifier blobClassifier;


#endif