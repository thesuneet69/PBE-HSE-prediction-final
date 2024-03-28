# Here we explore the prediction of various properties like PBE bandgap, HSE bandgap, Energy above hull and if the bandgaps are direct or not in ABX3 type compounds

## Workflow

### The following is the instructions for pred_stable_ogg.ipynb which takes into account all the features and trains the model. The pred_elemental.ipynb on the other hand acts as a benchmark as only the elemental features are taken for prediction into the model.  

1. Cleaned the dataset; checked for abnormal values, dropped repeated data, dealt with NaN values, and normalized data for processing through the model.
2. Featurized the data using matminer library to get relevant features apart from the already present features in the dataset.
3. Used K-fold cross-validator to compare various model's performance and choose the best one based on least RMSE score (XGBoost regressor).
4. Trained an XGBoost model with stratified train-test split and relevant parameters to predict both HSE and PBE bandgaps.
5. Hypertuned the model with grid-search to obtain optimum parameters to predict the requisite values.
6. Used the XGBoost regressor to predict PBE bandgap values including and excluding HSE features and plot relevant graphs for the same.
7. Used the XGBoost regressor to predict HSE bandgap values including and excluding HSE insulator and plot relevant graphs for the same.
8. Used the XGBoost regressor to predict energy above hull values and plot relevant graphs for the same.
9. Used SVM to classify PBE and HSE bandgap is direct or not and plotted the feature importances for the same.
10. Load a new data set and import the model to predict necessary features.
 
